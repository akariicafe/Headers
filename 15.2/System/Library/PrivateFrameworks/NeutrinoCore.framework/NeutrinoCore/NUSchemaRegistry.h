@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NUSchemaRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_schemas;
    NSMutableDictionary *_versions;
}

+ (id)sharedRegistry;

- (id)_schemaWithIdentifier:(id)a0;
- (BOOL)registerSchema:(id)a0 error:(out id *)a1;
- (id)_allVersionsWithOriginalIdentifier:(id)a0 upToVersion:(id)a1;
- (void)_registerBuiltInSchemas;
- (void).cxx_destruct;
- (id)versionsCompatibleWithIdentifier:(id)a0;
- (id)init;
- (id)_latestVersionWithOriginalIdentifier:(id)a0;
- (BOOL)_registerSchema:(id)a0 error:(out id *)a1;
- (id)schemaWithIdentifier:(id)a0;
- (BOOL)_registerVersion:(id)a0 withOriginalIdentifier:(id)a1 error:(out id *)a2;
- (BOOL)registerSchemas:(id)a0 error:(out id *)a1;
- (id)latestVersionWithNameSpace:(id)a0 name:(id)a1;

@end
