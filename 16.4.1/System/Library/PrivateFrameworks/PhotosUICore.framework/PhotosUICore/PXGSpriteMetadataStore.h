@interface PXGSpriteMetadataStore : NSObject {
    unsigned short _resizableCapInsetsCapacity;
}

@property (readonly, nonatomic) unsigned short numberOfResizableCapInsets;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; } *resizableCapInsets;

- (unsigned short)_indexOfResizableCapInsets:(struct { float x0; float x1; float x2; float x3; })a0;
- (void)dealloc;
- (unsigned short)addResizableCapInsets:(struct { float x0; float x1; float x2; float x3; })a0;
- (id)init;

@end
