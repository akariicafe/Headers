@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor

@property (nonatomic) BOOL disableGroupMerging;
@property (nonatomic) BOOL disableFiltering;
@property (nonatomic) BOOL enableSingletonGroups;

+ (id)descriptorWithContext:(id)a0;
+ (id)descriptorWithContext:(id)a0 tag:(id)a1;

- (id)allEmitterClasses;
- (id)feedGroupEmittersWithConfiguration:(id)a0 forYouConfig:(id)a1;

@end
