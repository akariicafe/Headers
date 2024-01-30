@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo

@property (nonatomic) BOOL added;
@property (nonatomic) BOOL removed;
@property (nonatomic) BOOL used;
@property (nonatomic) BOOL trimmed;
@property (nonatomic) unsigned long long mute;
@property (readonly, nonatomic) float gain;
@property (nonatomic) float normalGain;
@property (nonatomic) float dimmedGain;
@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) BOOL userModified;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (id)dataRepresentation;

@end
