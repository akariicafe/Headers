@class MTLArgument, NSString, NSMutableArray;
@protocol MTLArgumentEncoder;

@interface SCNMTLResourceBinding : NSObject {
    BOOL _needsRenderResource;
    struct { char vertexIndex; char fragmentIndex; } _indices;
    struct { char vertexIndex; char fragmentIndex; } _samplerIndices;
    NSMutableArray *_usedResources;
}

@property (retain, nonatomic) MTLArgument *argument;
@property (retain, nonatomic) id<MTLArgumentEncoder> argumentEncoder;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableArray *usedResources;
@property (nonatomic) BOOL needsRenderResource;
@property (copy, nonatomic) id bindBlock;

- (id)init;
- (void)dealloc;
- (id)description;

@end
