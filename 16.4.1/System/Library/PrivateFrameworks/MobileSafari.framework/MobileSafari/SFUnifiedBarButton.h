@class NSString, UIImage, NSAttributedString, SFUnifiedBarButtonView;

@interface SFUnifiedBarButton : SFUnifiedBarItem {
    SFUnifiedBarButtonView *_buttonView;
}

@property (retain, nonatomic) NSString *accessibilityIdentifier;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) id /* block */ action;

- (id)view;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_performAction;
- (id)initWithImage:(id)a0 action:(id /* block */)a1;

@end
