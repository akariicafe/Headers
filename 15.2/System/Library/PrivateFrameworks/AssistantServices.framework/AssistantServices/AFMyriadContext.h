@class AFMyriadGoodnessScoreOverrideState, AFMyriadPerceptualAudioHash;

@interface AFMyriadContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) AFMyriadPerceptualAudioHash *perceptualAudioHash;
@property (readonly, copy, nonatomic) AFMyriadGoodnessScoreOverrideState *overrideState;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimestamp:(unsigned long long)a0 perceptualAudioHash:(id)a1 overrideState:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
