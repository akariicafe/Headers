@interface ARUIRingsRenderPipelineConfiguration : NSObject

@property (nonatomic) BOOL hasVisibleRings;
@property (nonatomic) BOOL hasEmptyRing;
@property (nonatomic) BOOL hasFilledRing;
@property (nonatomic) BOOL needsAlphaReductionPass;
@property (nonatomic) BOOL hasOverlappingRing;

@end
