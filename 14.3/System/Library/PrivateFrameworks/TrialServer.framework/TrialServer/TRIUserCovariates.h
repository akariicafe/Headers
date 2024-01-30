@class TRIServerContext;

@interface TRIUserCovariates : NSObject <TRIUserCovariateProviding> {
    TRIServerContext *_context;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)tri_shortVersionStringForBundleId:(id)a0;
- (id)_applicationRecordForBundleId:(id)a0;
- (id)tri_versionForBundleId:(id)a0;
- (id)tri_hasApplicationWithBundleId:(id)a0;
- (id)tri_versionStringForBundleId:(id)a0;
- (id)tri_majorVersionForBundleId:(id)a0;
- (id)tri_minorVersionForBundleId:(id)a0;
- (id)tri_patchVersionForBundleId:(id)a0;
- (id)tri_versionForBundleId:(id)a0 compareToString:(id)a1;

@end
