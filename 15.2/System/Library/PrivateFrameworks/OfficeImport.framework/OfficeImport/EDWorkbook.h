@class NSDate, EDProcessors, NSString, EDWarnings, ECMappingContext, NSMutableArray, EDReference, ESDContainer, EDResources;

@interface EDWorkbook : OCDDocument {
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EDWarnings *mWarnings;
    NSMutableArray *mSheets;
    EDReference *mVisibleRange;
    unsigned long long mActiveSheetIndex;
    NSDate *mDateBaseDate;
    int mDateBase;
    NSString *mFileName;
    NSString *mTemporaryDirectory;
    NSMutableArray *mBulletBlips;
    ESDContainer *mEscherDrawingGroup;
    BOOL mIsOutOfMemoryConditionDetected;
}

+ (id)impliedColorMap;

- (id)resources;
- (id)fileName;
- (void)setVisibleRange:(id)a0;
- (void)setResources:(id)a0;
- (id)visibleRange;
- (id)description;
- (id)warnings;
- (void).cxx_destruct;
- (id)init;
- (id)temporaryDirectory;
- (void)dealloc;
- (id)processors;
- (id)bulletBlips;
- (id)initWithStringOptimization:(BOOL)a0;
- (void)addSheet:(id)a0;
- (id)sheetAtIndex:(unsigned long long)a0 loadIfNeeded:(BOOL)a1;
- (void)applyProcessors;
- (unsigned long long)sheetCount;
- (id)mappingContext;
- (unsigned long long)indexOfSheet:(id)a0;
- (id)workbookName;
- (id)sheetAtIndex:(unsigned long long)a0;
- (void)outOfMemoryDetected;
- (void)reduceMemoryIfPossible;
- (id)initWithFileName:(id)a0 andStringOptimization:(BOOL)a1;
- (void)addOtherResources:(id)a0;
- (void)setTemporaryDirectory:(id)a0;
- (id)dateBaseDate;
- (int)dateBase;
- (void)setDateBase:(int)a0;
- (unsigned int)legacyDateBase;
- (void)removeSheetAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfSheetWithName:(id)a0;
- (id)activeSheet;
- (void)setActiveSheet:(id)a0;
- (void)setMappingContext:(id)a0;
- (BOOL)isOutOfMemoryDetected;
- (id)escherDrawingGroup;
- (void)setEscherDrawingGroup:(id)a0;
- (unsigned long long)activeSheetIndex;
- (void)setActiveSheetIndex:(unsigned long long)a0;
- (void)removeWorksheetAtIndex:(unsigned int)a0;

@end
