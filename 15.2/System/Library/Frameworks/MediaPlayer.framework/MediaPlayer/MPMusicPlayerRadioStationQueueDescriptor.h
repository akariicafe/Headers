@class MPRadioStation;

@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, nonatomic) MPRadioStation *radioStation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRadioStation:(id)a0;

@end
