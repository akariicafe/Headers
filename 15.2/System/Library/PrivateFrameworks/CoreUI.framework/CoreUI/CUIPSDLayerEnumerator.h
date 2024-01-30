@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator {
    CUIPSDLayerGroupRef *_layerGroup;
    unsigned int _currentIndex;
    BOOL _isImageFile;
}

+ (id)enumeratorWithPSDLayerGroup:(id)a0;
+ (id)enumeratorWithPSDImage:(id)a0;

- (id)nextObject;
- (id)initWithPSDLayerGroup:(id)a0;
- (id)initWithPSDImage:(id)a0;
- (id)allObjects;
- (void)dealloc;

@end
