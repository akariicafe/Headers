@class BMDSL;
@protocol BMDSLTransform;

@interface BMDSLMap : BMDSL

@property (readonly, nonatomic) id<BMDSLTransform> transform;
@property (readonly, nonatomic) BMDSL *upstream;

+ (BOOL)supportsSecureCoding;

- (id)upstreams;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUpstream:(id)a0 transform:(id)a1;
- (id)initWithUpstream:(id)a0 transform:(id)a1 name:(id)a2 version:(unsigned int)a3;

@end
