@class NSString;

@interface HDClinicalAttachmentSchemaProvider : NSObject <HDAttachmentSchemaProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schemaIdentifier;

- (BOOL)readAuthorizationForObjectIdentifier:(id)a0 client:(id)a1 profile:(id)a2 error:(id *)a3;
- (long long)schemaVersionForObjectIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
- (BOOL)writeAuthorizationForObjectIdentifier:(id)a0 client:(id)a1 profile:(id)a2 error:(id *)a3;

@end
