@class TSCHChartModel, NSString, TSCHChartAxis, TSCHChartAxisID, NSUUID, TSCHReferenceLineStyle, TSCHReferenceLineNonStyle;

@interface TSCHReferenceLine : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning> {
    TSCHChartModel *mModel;
    TSCHReferenceLineStyle *mStyle;
    TSCHReferenceLineNonStyle *mNonStyle;
    unsigned long long mStyleSwapIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long styleSwapIndex;
@property (readonly, copy, nonatomic) TSCHChartAxisID *axisID;
@property (readonly, weak, nonatomic) TSCHChartAxis *axis;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL lineShowing;
@property (readonly, nonatomic) BOOL labelShowing;
@property (readonly, nonatomic) BOOL valueLabelShowing;
@property (readonly, nonatomic) unsigned long long refLineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)styleSwapOrStyleOwnerIndexFromAxisID:(id)a0 refLineIndex:(unsigned long long)a1;
+ (unsigned long long)maxNumberOfReferenceLines;
+ (id)p_lineLabelForType:(unsigned long long)a0;
+ (unsigned long long)maxNumberOfReferenceLinesOfType:(unsigned long long)a0;
+ (id)axisIDFromStyleSwapOrStyleOwnerIndex:(unsigned long long)a0;
+ (unsigned long long)refLineIndexFromStyleSwapOrStyleOwnerIndex:(unsigned long long)a0;
+ (id)defaultNonStyleWithContext:(id)a0 referenceLineType:(unsigned long long)a1 axis:(id)a2;
+ (unsigned char)styleOwnerPathType;

- (id)valueForProperty:(int)a0;
- (id)context;
- (id)model;
- (void).cxx_destruct;
- (void)dealloc;
- (id)style;
- (id)localizedTypeName;
- (id)defaultProperties;
- (id)drawableInfo;
- (id)chartInfo;
- (int)intValueForProperty:(int)a0 defaultValue:(int)a1;
- (id)objectValueForProperty:(int)a0;
- (void)clearParent;
- (float)floatValueForProperty:(int)a0 defaultValue:(float)a1;
- (BOOL)lineShowing;
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
- (id)initWithModel:(id)a0 axisID:(id)a1 index:(unsigned long long)a2 uuid:(id)a3;
- (double)referenceLineAxisValue;
- (BOOL)labelShowing;
- (BOOL)valueLabelShowing;
- (unsigned long long)refLineType;
- (void)setStyle:(id)a0 nonStyle:(id)a1;

@end
