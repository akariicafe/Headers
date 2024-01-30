@class NSMutableDictionary;

@interface _CPLResourcesMutableArray : NSObject {
    NSMutableDictionary *_resourcesPerType;
    NSMutableDictionary *_updatedResourcesPerType;
}

- (void)addResource:(id)a0;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (id)allResources;
- (id)reallyUpdatedResources;

@end
