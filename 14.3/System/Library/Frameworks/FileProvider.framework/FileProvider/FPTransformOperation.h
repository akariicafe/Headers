@class NSArray;

@interface FPTransformOperation : FPActionOperation

@property (readonly, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ transformCompletionBlock;

- (id)initWithItemsOfDifferentProviders:(id)a0 action:(id)a1;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;
- (id)finalItemsForStitcherForResult:(id)a0;
- (void)postStitchingFinishWithResult:(id)a0 error:(id)a1;
- (id)fp_prettyDescription;
- (void)actionMain;
- (void)presendNotifications;

@end
