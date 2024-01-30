@class HMDCameraVideoTier, HMDH264Profile, HMDH264Level;

@interface HMDCameraVideoParameterCombination : HMFObject

@property (readonly, nonatomic) HMDH264Profile *profile;
@property (readonly, nonatomic) HMDH264Level *level;
@property (readonly, nonatomic) HMDCameraVideoTier *videoTier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithProfile:(id)a0 level:(id)a1 videoTier:(id)a2;

@end
