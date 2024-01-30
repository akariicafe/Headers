@class NSMutableDictionary;

@interface _CPLResourcesMutableArray : NSObject {
    NSMutableDictionary *_resourcesPerType;
    NSMutableDictionary *_updatedResourcesPerType;
}

- (void)addResource:(id)a0;
- (id)initWithResources:(id)a0;
- (id)allResources;
- (void).cxx_destruct;
- (id)reallyUpdatedResources;

@end
