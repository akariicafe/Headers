@interface NMUKeepLocalErrorAlertConfiguration : NMUKeepLocalAlertConfiguration

@property (nonatomic) unsigned long long reason;

- (id)_downloadOnPowerActionWithOptions:(id)a0;
- (void)_setGenericErrorWithOKAction;
- (id)initWithModelObject:(id)a0 error:(id)a1 options:(id)a2;

@end
