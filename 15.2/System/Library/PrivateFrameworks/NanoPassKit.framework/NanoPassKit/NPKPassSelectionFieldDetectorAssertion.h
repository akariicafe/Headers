@protocol NPKPassSelectionFieldDetectorAssertionDelegate;

@interface NPKPassSelectionFieldDetectorAssertion : NPKTransientAssertion

@property (weak, nonatomic) id<NPKPassSelectionFieldDetectorAssertionDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)didEnterFieldForPassWithUniqueID:(id)a0;
- (void)_resyncState;

@end
