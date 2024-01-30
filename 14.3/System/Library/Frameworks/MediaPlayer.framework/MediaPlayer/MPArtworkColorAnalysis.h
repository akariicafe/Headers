@class UIColor;

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (readonly, nonatomic) UIColor *primaryTextColor;
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (readonly, nonatomic) UIColor *secondaryTextColor;
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_copyWithClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;

@end
