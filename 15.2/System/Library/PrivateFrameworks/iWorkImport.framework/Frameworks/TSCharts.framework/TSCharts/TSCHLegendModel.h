@class NSString, TSCHChartInfo;

@interface TSCHLegendModel : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSDMixing, NSCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _legendFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) TSCHChartInfo *chartInfo;
@property (nonatomic) struct CGPoint { double x0; double x1; } legendOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } legendSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned char)styleOwnerPathType;

- (id)style;
- (id)context;
- (id)valueForProperty:(int)a0;
- (id)model;
- (id)defaultProperties;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)willModify;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (int)intValueForProperty:(int)a0 defaultValue:(int)a1;
- (id)objectValueForProperty:(int)a0;
- (float)floatValueForProperty:(int)a0 defaultValue:(float)a1;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)a0;
- (int)defaultPropertyForGeneric:(int)a0;
- (id)p_genericToDefaultPropertyMap;
- (int)specificPropertyForGeneric:(int)a0;
- (BOOL)hasIntValueForProperty:(int)a0 value:(int *)a1;
- (BOOL)hasFloatValueForProperty:(int)a0 value:(float *)a1;
- (BOOL)hasObjectValueForProperty:(int)a0 value:(id *)a1;
- (id)operationPropertyNameFromGenericProperty:(int)a0;
- (id)nonstyle;
- (id)swapTuplesForMutations:(id)a0 forImport:(BOOL)a1;
- (id)swapTuplesForParagraphStyleMutations:(id)a0 forReferencingProperty:(int)a1;
- (void)loadFromPreUFFArchive:(const void *)a0;
- (void)loadFromUnityArchive:(const void *)a0;
- (void)saveToUnityArchive:(void *)a0;

@end
