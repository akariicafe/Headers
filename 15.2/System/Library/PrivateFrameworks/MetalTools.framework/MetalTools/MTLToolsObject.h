@class MTLToolsDevice;
@protocol MTLDevice;

@interface MTLToolsObject : NSObject {
    MTLToolsObject *_parent;
    MTLToolsDevice *_device;
    _Atomic int _externalReferences;
}

@property (retain, nonatomic) MTLToolsObject *baseObject;
@property (readonly) id<MTLDevice> device;

- (id)parent;
- (id)description;
- (void)dealloc;
- (id)originalObject;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)setOriginalObject:(id)a0;
- (id)strongParent;

@end
