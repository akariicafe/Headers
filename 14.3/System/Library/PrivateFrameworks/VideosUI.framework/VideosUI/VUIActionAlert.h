@class NSString;

@interface VUIActionAlert : VUIAction

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) NSString *dismissButtonTitle;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
