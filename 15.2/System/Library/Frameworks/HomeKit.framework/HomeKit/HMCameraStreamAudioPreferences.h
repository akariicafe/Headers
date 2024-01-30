@class NSNumber, NSSet;

@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *volume;
@property (readonly, nonatomic) NSSet *codecs;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVolume:(id)a0 codecs:(id)a1;

@end
