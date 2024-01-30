@class NSURL, NSString, UIAlertController;

@interface MSRadarInteraction : NSObject

@property (readonly, nonatomic) NSURL *radarURL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *openButtonTitle;
@property (copy, nonatomic) id /* block */ openHandler;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) NSString *maybeLaterButtonTitle;
@property (copy, nonatomic) id /* block */ maybeLaterHandler;
@property (readonly, nonatomic) UIAlertController *interactionViewController;

+ (id)interactionWithTitle:(id)a0 message:(id)a1 builder:(id /* block */)a2;
+ (id)interactionWithTitle:(id)a0 message:(id)a1 radarURL:(id)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 message:(id)a1 radarURL:(id)a2;
- (void)promptToFile;

@end
