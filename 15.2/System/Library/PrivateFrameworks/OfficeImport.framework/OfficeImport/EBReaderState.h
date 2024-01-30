@class ECColumnWidthConvertor, OABReaderState;

@interface EBReaderState : EBState {
    void *mXlReader;
    void *mXlSheetInfoTable;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    struct XlEshObjectFactory { void /* function */ **x0; BOOL x1; } *mXlEshObjectFactory;
    OABReaderState *mOAState;
}

@property (nonatomic) BOOL importCSV;

- (void).cxx_destruct;
- (void)dealloc;
- (id)oaState;
- (void)reportWarning:(id)a0;
- (void *)xlReader;
- (id)initWithXlReader:(void *)a0 cancelDelegate:(id)a1;
- (void)pauseReading;
- (void)resumeReading;
- (void)readGlobalXlObjects;
- (void *)xlSheetInfoTable;
- (id)columnWidthConvertor;

@end
