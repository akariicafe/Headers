@class NSString, UIViewController;

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {
    NSString *_segueClassName;
    NSString *_destinationViewControllerIdentifier;
    SEL _prepareForChildViewControllerSelector;
}

@property (nonatomic) BOOL performOnViewLoad;
@property (nonatomic) BOOL animates;
@property (retain, nonatomic) NSString *customPrepareForChildViewControllerSelectorName;
@property (readonly, nonatomic) SEL prepareForChildViewControllerSelector;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) UIViewController *viewController;

- (void)encodeWithCoder:(id)a0;
- (id)_perform:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;
- (id)segueWithDestinationViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_performWithDestinationViewController:(id)a0 sender:(id)a1;
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)a0;
- (id)perform:(id)a0;

@end
