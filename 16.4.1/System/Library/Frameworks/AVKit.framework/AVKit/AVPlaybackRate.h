@class NSString;

@interface AVPlaybackRate : AVPlaybackSpeed

@property (readonly, copy, nonatomic) NSString *compactLocalizedName;

- (id)initWithRate:(double)a0 localizedName:(id)a1 compactLocalizedName:(id)a2;
- (id)initWithRate:(double)a0 localizedName:(id)a1 compactLocalizedName:(id)a2 symbolImage:(id)a3;

@end
