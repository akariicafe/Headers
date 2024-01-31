@class NSString, CPContact, NAFuture, NSArray, CPBarButton;

@interface CPContactTemplate : CPTemplate <NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate, CPBarButtonProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (retain, nonatomic) CPContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

- (id)entity;
- (id)initWithContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)performUpdate;
- (id)initWithCoder:(id)a0;
- (BOOL)control:(id)a0 setEnabled:(BOOL)a1;
- (BOOL)control:(id)a0 setSelected:(BOOL)a1;
- (void)handleActionForControlIdentifier:(id)a0;

@end
