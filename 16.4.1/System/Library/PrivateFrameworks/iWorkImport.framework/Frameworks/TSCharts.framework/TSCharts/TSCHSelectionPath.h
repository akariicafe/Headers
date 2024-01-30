@class TSCHSelectionPathType, NSArray;

@interface TSCHSelectionPath : NSObject <NSCopying> {
    NSArray *_arguments;
}

@property (readonly, nonatomic) TSCHSelectionPathType *pathType;
@property (readonly, nonatomic) TSCHSelectionPath *subSelection;

+ (id)chartTitleSelectionPath;
+ (id)selectionPathWithPathType:(id)a0 arguments:(id)a1;
+ (id)selectionPathWithPathType:(id)a0 arguments:(id)a1 subSelection:(id)a2;
+ (id)selectionPathWithType:(id)a0 name:(id)a1 arguments:(id)a2;
+ (id)seriesEditModeSelectionPath;
+ (id)seriesSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)a0;

- (id)initWithArchive:(const void *)a0;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (void)saveToArchive:(void *)a0;
- (unsigned long long)argumentsCount;
- (id)debuggingName;
- (id)initWithPathType:(id)a0 arguments:(id)a1 subSelection:(id)a2;
- (id)initWithType:(id)a0 name:(id)a1 arguments:(id)a2;
- (id)rangeOfPathsToPath:(id)a0;
- (id)rangeOfReferenceLinePathsToPath:(id)a0 forModel:(id)a1;

@end
