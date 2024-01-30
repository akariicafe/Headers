@class NSArray, AKSparseMutableControllerArray;

@interface AKModelController : NSObject {
    AKSparseMutableControllerArray *_mutablePageModelControllers;
}

@property (readonly) NSArray *pageModelControllers;

- (id)init;
- (void).cxx_destruct;
- (void)deselectAllAnnotations;
- (id)pageModelControllerForAnnotation:(id)a0;
- (id)archivedPageModelControllers;
- (BOOL)populateFromArchivedPageModelControllers:(id)a0;
- (id)allSelectedAnnotations;
- (void)deleteAllSelectedAnnotations;
- (void)insertObject:(id)a0 inPageModelControllersAtIndex:(unsigned long long)a1;
- (void)insertPageModelControllers:(id)a0 atIndexes:(id)a1;
- (id)pageModelControllerForPage:(unsigned long long)a0;
- (void)removeObjectFromPageModelControllersAtIndex:(unsigned long long)a0;
- (void)removePageModelControllersAtIndexes:(id)a0;
- (void)replaceObjectInPageModelControllersAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)replacePageModelControllersAtIndexes:(id)a0 withPageModelControllers:(id)a1;

@end
