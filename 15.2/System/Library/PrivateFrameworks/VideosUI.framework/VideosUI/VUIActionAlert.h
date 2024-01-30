@class NSString, VUIAction;

@interface VUIActionAlert : VUIAction

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) NSString *dismissButtonTitle;
@property (retain, nonatomic) VUIAction *cancelAction;

- (void).cxx_destruct;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 appContext:(id)a1;

@end
