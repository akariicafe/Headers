@class WFMachineReadableCode;

@interface WFMachineReadableCodeContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFMachineReadableCode *codeObject;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)qrCodeItemWithString:(id)a0 errorCorrectionLevel:(id)a1;

- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)preferredFileType;
- (id)preferredObjectType;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateImageOfSize:(struct CGSize { double x0; double x1; })a0 error:(id *)a1;

@end
