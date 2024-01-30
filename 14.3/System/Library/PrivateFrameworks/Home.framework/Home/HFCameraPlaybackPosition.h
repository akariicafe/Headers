@class NSString, NAIdentity, HMCameraClip, NSDate;

@interface HFCameraPlaybackPosition : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSDate *clipPlaybackDate;
@property (retain, nonatomic) HMCameraClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)livePosition;
+ (id)clipPositionWithDate:(id)a0;
+ (id)clipPositionWithDate:(id)a0 inClip:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContentType:(unsigned long long)a0 clipPlaybackDate:(id)a1;
- (id)initWithClipPlaybackDate:(id)a0 inClip:(id)a1;
- (BOOL)clipIncludesPlaybackDate;

@end
