@class NSString;

@interface TNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)exporterClassForType:(id)a0 options:(id)a1;
- (id)nestedDocumentFilename;
- (Class)importerClassForType:(id)a0 path:(id)a1;
- (Class)exportOptionsControllerClass;
- (id)exportableTypes;
- (BOOL)isTCMessageExceptionErrorDomain:(id)a0;
- (BOOL)isSageDocumentType:(id)a0;
- (BOOL)isIBADocumentType:(id)a0;
- (BOOL)isTextOnlyType:(id)a0;
- (id)indexXmlFilename;
- (id)needNewerVersionIndexXmlContentString;
- (id)backwardsCompatibleTypeForType:(id)a0;
- (id)newExportableDocumentTypesForFlag:(unsigned long long)a0;

@end
