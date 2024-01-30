@class NSString, UIViewController;

@interface UIStoryboardSegue : NSObject

@property (copy, nonatomic) id /* block */ prepareHandler;
@property (copy, nonatomic) id /* block */ performHandler;
@property (retain, nonatomic) id sender;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIViewController *sourceViewController;
@property (readonly, nonatomic) UIViewController *destinationViewController;

+ (id)segueWithIdentifier:(id)a0 source:(id)a1 destination:(id)a2 performHandler:(id /* block */)a3;

- (void)_prepare;
- (void)perform;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 source:(id)a1 destination:(id)a2;

@end
