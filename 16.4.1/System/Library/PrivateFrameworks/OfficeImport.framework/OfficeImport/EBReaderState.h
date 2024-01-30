@class ECColumnWidthConvertor, OABReaderState;

@interface EBReaderState : EBState {
    void *mXlReader;
    void *mXlSheetInfoTable;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    struct XlEshObjectFactory { void /* function */ **x0; BOOL x1; } *mXlEshObjectFactory;
    OABReaderState *mOAState;
}

@property (nonatomic) BOOL importCSV;

- (void)dealloc;
- (void).cxx_destruct;
- (id)oaState;
- (id)columnWidthConvertor;
- (id)initWithXlReader:(void *)a0 cancelDelegate:(id)a1;
- (void)pauseReading;
- (void)readGlobalXlObjects;
- (void)reportWarning:(id)a0;
- (void)resumeReading;
- (void *)xlReader;
- (void *)xlSheetInfoTable;

@end
