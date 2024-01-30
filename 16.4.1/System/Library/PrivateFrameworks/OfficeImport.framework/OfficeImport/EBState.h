@class EDResources, EDWorkbook;
@protocol TCCancelDelegate;

@interface EBState : NSObject {
    void *mXlLinkTable;
    void *mXlNameTable;
    void *mSheetNames;
    void *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
}

@property (readonly, nonatomic) id<TCCancelDelegate> cancelDelegate;

- (void)setResources:(id)a0;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)resources;
- (void).cxx_destruct;
- (id)initWithCancelDelegate:(id)a0;
- (void)setWorkbook:(id)a0;
- (void *)sheetNames;
- (id)workbook;
- (void *)xlFormulaProcessor;
- (void *)xlLinkTable;
- (void *)xlNameTable;

@end
