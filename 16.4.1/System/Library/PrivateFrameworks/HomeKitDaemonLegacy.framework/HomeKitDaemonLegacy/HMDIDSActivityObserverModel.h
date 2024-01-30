@class NSData;

@interface HMDIDSActivityObserverModel : HMBModel

@property (retain, nonatomic) NSData *pushToken;

+ (id)hmbProperties;
+ (id)sentinelParentUUID;

- (id)initWithModelID:(id)a0;

@end
