@class NSUUID, NSArray, NAFuture, NSString, UIImage, CPBarButton;
@protocol CPTemplateDelegate, CPBaseTemplateProviding;

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<CPBaseTemplateProviding> templateProvider;
@property (nonatomic) BOOL needsUpdate;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id<CPTemplateDelegate> templateDelegate;
@property (retain, nonatomic) NSArray *internalLeadingBarButtons;
@property (retain, nonatomic) NSArray *internalTrailingBarButtons;
@property (retain, nonatomic) id userInfo;
@property (copy, nonatomic) NSString *tabTitle;
@property (retain, nonatomic) UIImage *tabImage;
@property (nonatomic) long long tabSystemItem;
@property (nonatomic) BOOL showsTabBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

- (void)encodeWithCoder:(id)a0;
- (void)performUpdate;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)control:(id)a0 setEnabled:(BOOL)a1;
- (void)handleActionForControlIdentifier:(id)a0;
- (void)templateWillAppearWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)templateDidAppearWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)templateWillDisappearWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)templateDidDisappearWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)invalidateTemplateProvider;
- (void)connectTemplateProvider:(id)a0;
- (BOOL)barButton:(id)a0 setImage:(id)a1;
- (BOOL)barButton:(id)a0 setTitle:(id)a1;
- (BOOL)control:(id)a0 setSelected:(BOOL)a1;

@end
