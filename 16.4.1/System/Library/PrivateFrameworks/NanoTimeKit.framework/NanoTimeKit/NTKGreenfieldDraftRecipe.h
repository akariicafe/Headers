@class NTKFace, NSString, NSMutableDictionary;

@interface NTKGreenfieldDraftRecipe : NSObject <NSSecureCoding> {
    NTKFace *_originalface;
    NSMutableDictionary *_slotToSampleTemplateMapping;
    NSMutableDictionary *_slotToItemIdMapping;
    NSMutableDictionary *_complicationUniqueIdentifierToOptionTypeMapping;
    NSMutableDictionary *_slotToAppIdentifierMapping;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NTKFace *faceForSharing;
@property (readonly, nonatomic) BOOL hasComplicationSharingOptions;
@property (copy, nonatomic) NSString *tempPathOverride;

+ (id)descriptionFromComplicationOption:(unsigned long long)a0;
+ (id)templateForComplicationAtSlot:(id)a0 face:(id)a1;
+ (id)titleFromComplicationOption:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFace:(id)a0;
- (void)_buildOptionTypeMapping;
- (void)_buildSlotToItemIdAndBundleIdMapping;
- (void)_buildSlotToSampleTemplateMapping;
- (BOOL)_shouldIncludeMetadataForSlot:(id)a0;
- (BOOL)canShareTemplate:(id)a0 slot:(id)a1;
- (unsigned long long)faceForSharingComplicationOptionsCount;
- (unsigned long long)optionForComplicationUniqueIdentifier:(id)a0;
- (void)setComplicationOption:(unsigned long long)a0 forComplicationUniqueIdentifier:(id)a1;
- (id)slotToBundleIdMapping;
- (id)slotToItemIdMapping;
- (id)slotToSampleTemplateMapping;
- (id)sortedComplicationSharingOptions;

@end
