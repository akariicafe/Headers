@class DBEnvironmentConfiguration, URTAlert;

@interface DBUserAlertViewController : UIViewController

@property (readonly, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (readonly, nonatomic) id /* block */ dismissHandler;
@property (readonly, nonatomic) URTAlert *alert;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithAlert:(id)a0 environmentConfiguration:(id)a1;

@end
