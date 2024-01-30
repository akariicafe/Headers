@class VUIUpNextButtonProperties, NSString, NSLayoutConstraint;

@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol>

@property (retain, nonatomic) NSLayoutConstraint *stackViewWidthConstraint;
@property (retain, nonatomic) VUIUpNextButtonProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setTintColor:(id)a0;
- (id)largeContentTitle;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;
- (void)selectButtonAction:(id)a0;
- (void)upNextStateChangedToAdded;
- (void)upNextStateChangedToRemoved;

@end
