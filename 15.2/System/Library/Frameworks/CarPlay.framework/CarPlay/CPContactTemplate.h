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
- (void)performUpdate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleActionForControlIdentifier:(id)a0;

@end
