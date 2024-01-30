@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator {
    CUIPSDLayerGroupRef *_layerGroup;
    unsigned int _currentIndex;
    BOOL _isImageFile;
}

+ (id)enumeratorWithPSDLayerGroup:(id)a0;
+ (id)enumeratorWithPSDImage:(id)a0;

- (void)dealloc;
- (id)nextObject;
- (id)allObjects;
- (id)initWithPSDLayerGroup:(id)a0;
- (id)initWithPSDImage:(id)a0;

@end
