@class UIColor, NSString, NSArray, UIImage;

@interface SiriUISashItem : NSObject

@property (nonatomic, setter=_setDefault:) BOOL isDefault;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) BOOL canPunchout;
@property (copy, nonatomic) NSArray *commands;
@property (nonatomic) BOOL requestsExtraPadding;

+ (id)_languageCode;
+ (id)defaultSashItem;
+ (void)_setLanguageCode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)initWithExtension:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1;

@end
