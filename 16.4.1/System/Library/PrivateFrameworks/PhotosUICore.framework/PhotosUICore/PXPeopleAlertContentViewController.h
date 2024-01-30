@class NSString, PHPerson;

@interface PXPeopleAlertContentViewController : UIViewController

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) NSString *message;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithPerson:(id)a0 message:(id)a1;

@end
