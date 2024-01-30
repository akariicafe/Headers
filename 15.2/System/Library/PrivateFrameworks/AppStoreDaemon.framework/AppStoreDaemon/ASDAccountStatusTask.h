@protocol ASDClipServiceBroker;

@interface ASDAccountStatusTask : NSObject <NSSecureCoding> {
    id<ASDClipServiceBroker> _broker;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL lookupFamilyInfoIfNecessary;

- (void)statusWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
