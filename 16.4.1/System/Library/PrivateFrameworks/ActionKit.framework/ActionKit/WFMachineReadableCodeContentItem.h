@class WFMachineReadableCode, NSDictionary, WFFileType, WFObjectType, NSString;

@interface WFMachineReadableCodeContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFMachineReadableCode *codeObject;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)qrCodeItemWithString:(id)a0 errorCorrectionLevel:(id)a1;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)generateImageOfSize:(struct CGSize { double x0; double x1; })a0 error:(id *)a1;

@end
