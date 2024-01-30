@class NSString;

@interface TSTCellSpec : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>

@property (nonatomic) unsigned int interactionTypeFromTheFuture;
@property (readonly, nonatomic) unsigned int interactionType;
@property (readonly, nonatomic) BOOL hasTSCEFormula;
@property (readonly, nonatomic) BOOL isControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)cellSpecFromTSKFormat:(id)a0;
+ (id)cellDiffProperties;
+ (id)defaultCellSpec;
+ (BOOL)interactionTypeIsControl:(unsigned int)a0;
+ (BOOL)isShimControlFormatType:(unsigned int)a0;
+ (unsigned int)interactionTypeForShimControlFormatType:(unsigned int)a0;
+ (unsigned int)shimControlFormatTypeForInteractionType:(unsigned int)a0;
+ (id)displayNameForInteractionType:(unsigned int)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)asChooserControlSpec;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;
- (id)asFormulaSpec;
- (id)asRangeControlSpec;
- (BOOL)validateFormatAndValue:(id)a0;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3;
- (BOOL)tst_dataObjectIsEqual:(id)a0;
- (unsigned long long)tst_dataObjectHash;
- (id)asToggleControlSpec;
- (id)propertiesMatchingThoseInMap:(id)a0;

@end
