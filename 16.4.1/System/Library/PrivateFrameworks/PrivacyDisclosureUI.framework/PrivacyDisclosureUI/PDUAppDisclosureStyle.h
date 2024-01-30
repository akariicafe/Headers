@class UIColor;

@interface PDUAppDisclosureStyle : NSObject

@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) long long interfaceStyle;

+ (id)styleWithApplication:(id)a0;
+ (id)styleWithBundle:(id)a0;

- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (long long)_styleFromString:(id)a0;
- (void)_fetchStyleWithBundle:(id)a0;

@end
