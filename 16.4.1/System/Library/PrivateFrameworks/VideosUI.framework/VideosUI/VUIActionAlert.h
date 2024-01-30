@class NSString, NSDictionary, NSMutableArray, VUIAction;

@interface VUIActionAlert : VUIAction

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) NSMutableArray *actionItems;
@property (retain, nonatomic) NSString *dismissButtonTitle;
@property (retain, nonatomic) VUIAction *cancelAction;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSDictionary *dialogMetrics;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
