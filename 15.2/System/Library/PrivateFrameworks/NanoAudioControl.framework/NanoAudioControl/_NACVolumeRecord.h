@class NSMutableSet;

@interface _NACVolumeRecord : NSObject <NSSecureCoding> {
    NSMutableSet *_observers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float volumeValue;
@property (nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled;
@property (nonatomic) long long volumeWarningState;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic) float EUVolumeLimit;
@property (readonly, nonatomic) NSMutableSet *observers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
