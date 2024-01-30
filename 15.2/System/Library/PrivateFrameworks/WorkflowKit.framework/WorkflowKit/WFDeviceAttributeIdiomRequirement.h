@interface WFDeviceAttributeIdiomRequirement : NSObject

@property (readonly, nonatomic) BOOL isEqual;
@property (readonly, nonatomic) long long idiom;

- (id)initWithIdiom:(long long)a0 isEqual:(BOOL)a1;

@end
