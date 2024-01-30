@class BSColor, NSString;

@interface SBSUserNotificationColorDefinition : NSObject <NSCopying>

@property (readonly, copy, nonatomic) BSColor *color;
@property (readonly, copy, nonatomic) NSString *colorName;

+ (id)definitionWithColor:(id)a0;
+ (id)definitionWithColorName:(id)a0;

- (id)_initWithDictionary:(id)a0;
- (id)build;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_stringForColor:(id)a0;
- (id)_colorForString:(id)a0;
- (id)_initWithColorName:(id)a0 color:(id)a1;

@end
