@class UIColor;

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (readonly, nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;

- (void)encodeWithCoder:(id)a0;
- (id)_copyWithClass:(Class)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
