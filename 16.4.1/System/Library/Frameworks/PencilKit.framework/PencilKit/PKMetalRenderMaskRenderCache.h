@class NSUUID;

@interface PKMetalRenderMaskRenderCache : PKMetalStrokeRenderCache

@property (readonly, nonatomic) NSUUID *strokeDataUUID;

- (void).cxx_destruct;
- (id)initWithInk:(id)a0 strokeDataUUID:(id)a1;

@end
