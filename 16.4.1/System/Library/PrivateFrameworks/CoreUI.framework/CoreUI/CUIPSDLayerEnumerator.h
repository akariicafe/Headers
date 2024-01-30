@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator {
    CUIPSDLayerGroupRef *_layerGroup;
    unsigned int _currentIndex;
    BOOL _isImageFile;
}

+ (id)enumeratorWithPSDImage:(id)a0;
+ (id)enumeratorWithPSDLayerGroup:(id)a0;

- (id)nextObject;
- (void)dealloc;
- (id)allObjects;
- (id)initWithPSDImage:(id)a0;
- (id)initWithPSDLayerGroup:(id)a0;

@end
