@class SCNNode, CAAnimation, NSString;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying> {
    CAAnimation *_animation;
    long long _inputMode;
    double _inputScale;
    double _inputBias;
    SCNNode *_inputOrigin;
    NSString *_inputProperty;
    id _c3dAnimation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) long long inputMode;
@property (nonatomic) double inputScale;
@property (nonatomic) double inputBias;
@property (weak, nonatomic) SCNNode *inputOrigin;
@property (copy, nonatomic) NSString *inputProperty;

+ (id)particlePropertyControllerWithAnimation:(id)a0;
+ (id)controllerWithAnimation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;
- (void)setC3dAnimation:(id)a0;
- (id)c3dAnimation;
- (void)_customEncodingOfSCNParticlePropertyController:(id)a0;
- (void)_customDecodingOfSCNParticlePropertyController:(id)a0;

@end
