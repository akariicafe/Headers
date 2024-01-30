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

- (id)resources;
- (void)setResources:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)a0;
- (id)workbook;
- (void)setWorkbook:(id)a0;
- (void *)xlFormulaProcessor;
- (void *)xlLinkTable;
- (void *)xlNameTable;
- (void *)sheetNames;

@end
