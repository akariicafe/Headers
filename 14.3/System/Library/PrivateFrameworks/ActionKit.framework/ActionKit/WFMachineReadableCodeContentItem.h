@class NSString, WFMachineReadableCode;

@interface WFMachineReadableCodeContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic) BOOL prefersImage;
@property (retain, nonatomic) NSString *errorCorrectionLevel;
@property (readonly, nonatomic) WFMachineReadableCode *codeObject;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)qrCodeItemWithString:(id)a0 errorCorrectionLevel:(id)a1;

- (void).cxx_destruct;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)preferredFileType;
- (id)preferredObjectType;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateImageOfSize:(struct CGSize { double x0; double x1; })a0 withErrorCorrectionLevel:(id)a1 error:(id *)a2;

@end
