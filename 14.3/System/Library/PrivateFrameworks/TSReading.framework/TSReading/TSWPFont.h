@class NSString;

@interface TSWPFont : NSObject {
    NSString *_displayName;
    NSString *_familyName;
    unsigned long long _hash;
}

@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *compatibilityName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *familyName;

+ (id)fontWithName:(id)a0;
+ (id)fontWithName:(id)a0 compatibilityName:(id)a1;
+ (BOOL)isKeyValueProxyLeafType;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFontName:(id)a0 compatibilityName:(id)a1;
- (id)initWithFontName:(id)a0;

@end
