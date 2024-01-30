@class NSArray, NSError;

@interface _UISaveToCameraRollSaveItemsController : NSObject

@property (readonly, nonatomic) id /* block */ saveCompletionBlock;
@property (readonly, nonatomic) NSArray *itemsToSchedule;
@property (readonly, nonatomic) long long pendingSaveCount;
@property (readonly, nonatomic) NSError *errorToReport;
@property (readonly, nonatomic) BOOL successToReport;

- (id)initWithItems:(id)a0 saveCompletionBlock:(id /* block */)a1;
- (void)beginSavingItem:(id)a0;
- (void)_saveImageData:(id)a0;
- (void)_saveVideoAtPath:(id)a0;
- (void)_didCompleteSavingItem:(id)a0 error:(id)a1 contextInfo:(void *)a2;
- (void)_noteDidCompleteSavingItem:(id)a0 error:(id)a1;
- (void)_invokeSaveCompletionBlock;
- (void).cxx_destruct;
- (void)beginSaving;
- (void)_saveImage:(id)a0;

@end
