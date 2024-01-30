@class NSArray, NSDictionary, NSString;

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSDictionary *userDisplayStrings;
@property (readonly, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) long long errorCode;

@end
