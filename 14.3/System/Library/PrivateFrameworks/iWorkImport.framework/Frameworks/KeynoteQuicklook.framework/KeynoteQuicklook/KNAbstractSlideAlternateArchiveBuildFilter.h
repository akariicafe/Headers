@class NSHashTable;

@interface KNAbstractSlideAlternateArchiveBuildFilter : NSObject {
    NSHashTable *_excludedBuilds;
}

@property (readonly, nonatomic) unsigned long long excludedBuildMinVersion;
@property (readonly, nonatomic) BOOL hasExcludedBuilds;

- (void).cxx_destruct;
- (id)initWithExcludedBuildMinVersion:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (void)addExcludedBuild:(id)a0;
- (id)filteredBuildsForBuilds:(id)a0;
- (id)filteredBuildChunksForBuildChunks:(id)a0;

@end
