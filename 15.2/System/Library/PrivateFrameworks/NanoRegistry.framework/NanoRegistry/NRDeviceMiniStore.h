@class NSDictionary;

@interface NRDeviceMiniStore : NSObject <NSSecureCoding> {
    NSDictionary *_store;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)fullStore;

@end
