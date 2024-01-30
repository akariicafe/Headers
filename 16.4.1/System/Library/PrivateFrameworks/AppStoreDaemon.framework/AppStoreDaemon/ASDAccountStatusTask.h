@protocol ASDClipServiceBroker;

@interface ASDAccountStatusTask : NSObject <NSSecureCoding> {
    id<ASDClipServiceBroker> _broker;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL lookupFamilyInfoIfNecessary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)statusWithCompletion:(id /* block */)a0;

@end
