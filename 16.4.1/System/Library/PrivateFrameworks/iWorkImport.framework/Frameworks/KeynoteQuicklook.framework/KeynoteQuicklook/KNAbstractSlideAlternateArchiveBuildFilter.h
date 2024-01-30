@class NSHashTable;

@interface KNAbstractSlideAlternateArchiveBuildFilter : NSObject {
    NSHashTable *_excludedBuilds;
}

@property (readonly, nonatomic) unsigned long long excludedBuildMinVersion;
@property (readonly, nonatomic) BOOL hasExcludedBuilds;

- (void).cxx_destruct;
- (void)addExcludedBuild:(id)a0;
- (id)filteredBuildChunksForBuildChunks:(id)a0;
- (id)filteredBuildsForBuilds:(id)a0;
- (id)initWithExcludedBuildMinVersion:(unsigned long long)a0 capacity:(unsigned long long)a1;

@end
