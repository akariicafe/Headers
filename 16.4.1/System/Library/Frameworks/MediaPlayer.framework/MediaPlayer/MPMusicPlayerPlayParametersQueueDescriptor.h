@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPMusicPlayerPlayParameters *_containerPlayParameters;
}

@property (copy, nonatomic) NSArray *playParametersQueue;
@property (retain, nonatomic) MPMusicPlayerPlayParameters *startItemPlayParameters;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)containerPlayParameters;
- (id)initWithPlayParametersQueue:(id)a0;
- (void)setContainerPlayParameters:(id)a0;
- (void)setEndTime:(double)a0 forItemWithPlayParameters:(id)a1;
- (void)setStartTime:(double)a0 forItemWithPlayParameters:(id)a1;

@end
