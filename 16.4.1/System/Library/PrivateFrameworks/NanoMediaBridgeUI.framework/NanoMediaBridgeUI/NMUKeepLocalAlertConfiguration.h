@class NSString, NSArray, NMUKeepLocalAlertAction;

@interface NMUKeepLocalAlertConfiguration : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NMUKeepLocalAlertAction *cancelAction;

+ (id)requiredPropertiesForModelKind:(id)a0;

- (void).cxx_destruct;
- (id)_cancelAction;
- (id)_downloadNowOffPowerActionWithOptions:(id)a0;
- (id)_downloadNowOffPowerOnCellularActionWithOptions:(id)a0;
- (id)_okAction;
- (id)_titleForModelObject:(id)a0;
- (id)alertViewControllerWithKeepLocalBlock:(id /* block */)a0;

@end
