@class NSString, NSData;

@interface HMDRelayAccessTokenModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) NSData *accessToken;

+ (id)properties;

- (id)dependentUUIDs;

@end
