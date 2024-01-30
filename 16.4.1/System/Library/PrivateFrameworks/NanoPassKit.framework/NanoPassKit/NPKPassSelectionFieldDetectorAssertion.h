@protocol NPKPassSelectionFieldDetectorAssertionDelegate;

@interface NPKPassSelectionFieldDetectorAssertion : NPKTransientAssertion

@property (weak, nonatomic) id<NPKPassSelectionFieldDetectorAssertionDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_resyncState;
- (void)didEnterFieldForPassWithUniqueID:(id)a0;

@end
