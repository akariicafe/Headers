@class BMDSL, NSString;
@protocol BMDSLStateValue;

@interface BMDSLState : BMDSL

@property (readonly, nonatomic) BMDSL *upstream;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id<BMDSLStateValue> value;
@property (retain, nonatomic) id<BMDSLStateValue> combinedValue;

+ (BOOL)supportsSecureCoding;

- (id)upstreams;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)combinedState;
- (id)initWithName:(id)a0 version:(unsigned int)a1 upstream:(id)a2 key:(id)a3 value:(id)a4;
- (id)initWithUpstream:(id)a0 key:(id)a1 value:(id)a2;

@end
