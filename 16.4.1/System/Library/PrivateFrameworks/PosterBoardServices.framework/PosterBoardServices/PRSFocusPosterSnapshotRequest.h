@class NSString;

@interface PRSFocusPosterSnapshotRequest : NSObject

@property (readonly, copy, nonatomic) NSString *focusModeUUID;
@property (readonly, nonatomic) long long configurationType;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long maxCount;
@property (readonly, nonatomic) double imageScaleRelativeToScreen;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFocusModeUUID:(id)a0 maxCount:(unsigned long long)a1;
- (id)initWithFocusModeUUID:(id)a0 configurationType:(long long)a1 variant:(long long)a2 options:(unsigned long long)a3 imageScaleRelativeToScreen:(double)a4 maxCount:(unsigned long long)a5;
- (id)initWithFocusModeUUID:(id)a0 configurationType:(long long)a1 variant:(long long)a2 options:(unsigned long long)a3 maxCount:(unsigned long long)a4;
- (id)initWithPosterRequest:(id)a0;
- (void)setImageScaleRelativeToScreen:(double)a0;

@end
