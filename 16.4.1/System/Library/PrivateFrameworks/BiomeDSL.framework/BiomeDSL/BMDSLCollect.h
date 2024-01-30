@class BMDSL;

@interface BMDSLCollect : BMDSL

@property (readonly, nonatomic) BMDSL *upstream;

+ (BOOL)supportsSecureCoding;

- (id)upstreams;
- (void)encodeWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)initWithCoder:(id)a0;
- (id)initWithUpstream:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 name:(id)a1 version:(unsigned int)a2;

@end
