@class UIViewController;

@interface HUToolbarStateInstance : NSObject

@property (retain, nonatomic) UIViewController *associatedViewController;
@property (retain, nonatomic) id backButtonTarget;
@property (nonatomic) SEL backButtonSelector;
@property (retain, nonatomic) id settingsButtonTarget;
@property (nonatomic) SEL settingsButtonSelector;

- (void).cxx_destruct;
- (id)description;
- (id)initWithViewController:(id)a0;

@end
