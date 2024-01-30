@class NSString, NSMutableArray;

@interface VSTwoFactorEntryAppDocumentController : VSAppDocumentController <VSTwoFactorEntryViewModelDelegate>

@property (retain, nonatomic) NSMutableArray *buttonElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_startObservingViewModel:(id)a0;
- (void)_stopObservingViewModel:(id)a0;
- (id)_newViewModel;
- (BOOL)_updateTwoFactorEntryViewModel:(id)a0 withTemplate:(id)a1 error:(id *)a2;
- (BOOL)_updateViewModel:(id)a0 error:(id *)a1;
- (void)twoFactorEntryViewModel:(id)a0 didPressButtonAtIndex:(unsigned long long)a1;

@end
