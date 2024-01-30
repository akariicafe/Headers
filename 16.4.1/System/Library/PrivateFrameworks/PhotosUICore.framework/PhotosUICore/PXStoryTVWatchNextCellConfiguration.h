@class NSString, PXStoryTVCellSpec;

@interface PXStoryTVWatchNextCellConfiguration : PXGFocusEffectViewConfiguration

@property (retain, nonatomic) PXStoryTVCellSpec *spec;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) long long countdownValue;
@property (nonatomic) long long maximumCountdownValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
