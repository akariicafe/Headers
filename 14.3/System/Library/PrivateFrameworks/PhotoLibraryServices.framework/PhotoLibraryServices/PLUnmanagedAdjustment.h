@class NSString, PLAdditionalAssetAttributes, NSDate, NSNumber;

@interface PLUnmanagedAdjustment : PLManagedObject

@property (retain, nonatomic) NSNumber *adjustmentBaseImageFormat;
@property (retain, nonatomic) NSString *adjustmentFormatIdentifier;
@property (retain, nonatomic) NSString *adjustmentFormatVersion;
@property (retain, nonatomic) NSDate *adjustmentTimestamp;
@property (retain, nonatomic) NSString *editorLocalizedName;
@property (retain, nonatomic) NSString *otherAdjustmentsFingerprint;
@property (retain, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic) unsigned int adjustmentRenderTypes;

+ (id)entityName;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)a0;
+ (id)_convertRedEyeCorrections:(id)a0 withOrientation:(long long)a1;
+ (id)_convertRedEyeCorrection:(id)a0 withOrientation:(long long)a1;
+ (id)copyUnmanagedAdjustmentFromSourceAsset:(id)a0 forPlaceholderAsset:(id)a1 inLibrary:(id)a2 error:(id *)a3;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (void)awakeFromInsert;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;

@end
