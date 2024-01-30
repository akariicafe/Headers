@class NSString, NSError;

@interface SSVCloudServiceAPITokenResponse : NSObject <SSXPCCoding>

@property (copy, nonatomic) NSString *apiToken;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
