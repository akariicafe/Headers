@interface RCTelephonyController : NSObject

@property (readonly, nonatomic) BOOL isCallPresent;

+ (id)sharedTelephonyController;

@end
