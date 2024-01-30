@class NSString;
@protocol CPLEngineIDMapping;

@interface _CPLOptimisticIDMapping : NSObject <CPLEngineIDMapping>

@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIDMapping:(id)a0;
- (BOOL)addCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(BOOL)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (id)setupCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(BOOL)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)a0 isFinal:(BOOL *)a1;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)a0;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)a0;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)a0 isFinal:(BOOL *)a1;
- (void).cxx_destruct;

@end
