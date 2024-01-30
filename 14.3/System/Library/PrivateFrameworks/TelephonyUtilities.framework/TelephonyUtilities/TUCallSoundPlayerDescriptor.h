@class NSNumber;

@interface TUCallSoundPlayerDescriptor : NSObject

@property (nonatomic) long long soundType;
@property (retain, nonatomic) NSNumber *sound;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) double pauseDuration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSoundType:(long long)a0 call:(id)a1;
- (id)initWithSoundType:(long long)a0 provider:(id)a1 video:(BOOL)a2 region:(long long)a3;
- (id)initWithSoundType:(long long)a0 sound:(id)a1 iterations:(unsigned long long)a2 pauseDuration:(double)a3;

@end
