@class MPSNNFilterNode;
@protocol MPSHandle, MPSImageAllocator;

@interface MPSNNImageNode : NSObject {
    MPSNNFilterNode *_parent;
    unsigned long long _clientCount;
    BOOL _initializedWithParent;
}

@property (retain, nonatomic) id<MPSHandle> handle;
@property (nonatomic) unsigned long long format;
@property (retain, nonatomic) id<MPSImageAllocator> imageAllocator;
@property (nonatomic) BOOL exportFromGraph;
@property (nonatomic) BOOL synchronizeResource;
@property (nonatomic) BOOL stopGradient;

+ (id)nodeWithHandle:(id)a0;
+ (id)exportedNodeWithHandle:(id)a0;

- (id)debugQuickLookObject;
- (id)initWithHandle:(id)a0;
- (void)dealloc;
- (id)initWithParent:(id)a0;
- (id)debugDescription;

@end
