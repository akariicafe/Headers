@class NSString, UIImage, SFUnifiedBarButtonView;

@interface SFUnifiedBarButton : SFUnifiedBarItem {
    SFUnifiedBarButtonView *_buttonView;
}

@property (retain, nonatomic) NSString *accessibilityIdentifier;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL showsPlatter;

- (void)setEnabled:(BOOL)a0;
- (id)view;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 action:(id /* block */)a1;
- (void)_performAction;

@end
