@class NSNumber, NSSet;

@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *volume;
@property (readonly, nonatomic) NSSet *codecs;

- (void).cxx_destruct;
- (id)initWithVolume:(id)a0 codecs:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
