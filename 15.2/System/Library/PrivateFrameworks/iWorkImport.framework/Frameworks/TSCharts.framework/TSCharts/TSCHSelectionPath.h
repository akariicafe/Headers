@class TSCHSelectionPathType, NSArray;

@interface TSCHSelectionPath : NSObject <NSCopying> {
    NSArray *_arguments;
}

@property (readonly, nonatomic) TSCHSelectionPathType *pathType;
@property (readonly, nonatomic) TSCHSelectionPath *subSelection;

+ (id)seriesSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)selectionPathWithPathType:(id)a0 arguments:(id)a1;
+ (id)selectionPathWithType:(id)a0 name:(id)a1 arguments:(id)a2;
+ (id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)selectionPathWithPathType:(id)a0 arguments:(id)a1 subSelection:(id)a2;
+ (id)seriesEditModeSelectionPath;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)name;
- (id)type;
- (unsigned long long)hash;
- (void)saveToArchive:(void *)a0;
- (unsigned long long)argumentsCount;
- (id)initWithType:(id)a0 name:(id)a1 arguments:(id)a2;
- (id)debuggingName;
- (id)initWithPathType:(id)a0 arguments:(id)a1 subSelection:(id)a2;
- (id)rangeOfReferenceLinePathsToPath:(id)a0 forModel:(id)a1;
- (id)rangeOfPathsToPath:(id)a0;

@end
