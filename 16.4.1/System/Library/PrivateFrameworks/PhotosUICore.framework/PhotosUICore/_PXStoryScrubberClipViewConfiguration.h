@interface _PXStoryScrubberClipViewConfiguration : PXGFocusEffectViewConfiguration

@property (nonatomic) long long segmentIdentifier;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL shouldAdjustContent;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;

@end
