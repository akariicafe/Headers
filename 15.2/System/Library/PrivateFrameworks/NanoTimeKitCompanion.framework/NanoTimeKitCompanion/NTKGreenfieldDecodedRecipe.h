@class NSString, NSDictionary, NTKFace, NSNumber;

@interface NTKGreenfieldDecodedRecipe : NSObject <NSSecureCoding> {
    NSDictionary *_complicationSlotToTemplateMapping;
    NSDictionary *_complicationSlotToTemplateOverrideMapping;
    BOOL _isUsingModifiedComplicationsSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NTKFace *watchFace;
@property (readonly, nonatomic) NSDictionary *complicationSlotToTemplateMapping;
@property (readonly, nonatomic) NSDictionary *complicationSlotToItemIdMapping;
@property (readonly, nonatomic) NSDictionary *complicationSlotToNameMapping;
@property (readonly, nonatomic) NSDictionary *complicationSlotToBundleIdMapping;
@property (readonly, nonatomic) BOOL wasModifiedForThisDevice;
@property (readonly, nonatomic) NSString *noBorderFacePreviewImagePath;
@property (readonly, nonatomic) NSNumber *senderBoxedDeviceSize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_template:(id)a0 isUnsupportedForComplication:(id)a1;
- (id)_overrideTemplateForComplication:(id)a0 atSlot:(id)a1 face:(id)a2;
- (id)initWithWatchFace:(id)a0 complicationSlotToTemplateMapping:(id)a1 complicationSlotToItemIdMapping:(id)a2 complicationSlotToNameMapping:(id)a3 complicationSlotToBundleIdMapping:(id)a4 isUsingModifiedComplicationsSet:(BOOL)a5 noBorderFacePreviewImagePath:(id)a6 senderBoxedDeviceSize:(id)a7;
- (void)collectOverrideTemplates;

@end
