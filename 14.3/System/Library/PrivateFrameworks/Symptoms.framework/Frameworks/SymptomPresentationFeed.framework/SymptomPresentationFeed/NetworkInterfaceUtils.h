@interface NetworkInterfaceUtils : NSObject

@property (readonly, nonatomic) BOOL hasPrimaryInterface;

+ (id)sharedInstance;

@end
