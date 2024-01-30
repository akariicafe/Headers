@class NSString;

@interface TMLApplication : NSObject

@property (readonly, nonatomic) NSString *hardwareModel;
@property (readonly, nonatomic) NSString *applicationVersion;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
