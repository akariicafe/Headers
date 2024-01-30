@class PKMetalBuffer;

@interface PKMetalStrokeRenderCacheBuffer : NSObject {
    PKMetalBuffer *_buffer;
    unsigned long long _offset;
    unsigned long long _numVertices;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

- (id)init;
- (void).cxx_destruct;

@end
