@class NSString;

@interface TMLApplication : NSObject

@property (readonly, nonatomic) NSString *hardwareModel;
@property (readonly, nonatomic) NSString *applicationVersion;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
