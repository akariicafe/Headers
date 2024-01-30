@interface OBDevice : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long templateType;
@property (nonatomic) BOOL hasHomeButton;

+ (id)currentDevice;

- (unsigned long long)templateTypeForBoundsWidth:(double)a0;

@end
