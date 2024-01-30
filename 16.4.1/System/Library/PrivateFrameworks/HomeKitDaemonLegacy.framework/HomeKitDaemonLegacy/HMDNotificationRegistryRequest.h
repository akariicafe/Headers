@class NSString;

@interface HMDNotificationRegistryRequest : HMFObject

@property (readonly) BOOL enable;
@property (readonly, copy) NSString *userID;
@property long long retryCount;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithEnable:(BOOL)a0 userID:(id)a1;

@end
