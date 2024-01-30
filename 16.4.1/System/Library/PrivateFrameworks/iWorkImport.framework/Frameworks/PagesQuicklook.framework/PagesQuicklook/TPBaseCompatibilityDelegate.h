@class NSString;

@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)exporterClassForType:(id)a0 options:(id)a1;
- (id)nestedDocumentFilename;
- (id)backwardsCompatibleTypeForType:(id)a0;
- (id)exportableTypes;
- (BOOL)isTextOnlyType:(id)a0;
- (Class)exportOptionsControllerClass;
- (Class)importerClassForType:(id)a0 path:(id)a1;
- (id)indexXmlFilename;
- (BOOL)isExportSupportedForType:(id)a0 exporterOptions:(id)a1 documentRoot:(id)a2;
- (BOOL)isIBADocumentType:(id)a0;
- (BOOL)isSageDocumentType:(id)a0;
- (BOOL)isTCMessageExceptionErrorDomain:(id)a0;
- (id)needNewerVersionIndexXmlContentString;
- (id)newExportableDocumentTypesForFlag:(unsigned long long)a0;
- (id)unsupportedExportMessageStringForType:(id)a0;
- (id)EPUBExportLanguageCodes;
- (id)EPUBExportCategories;

@end
