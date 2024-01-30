@class NSString, NSArray, SVXDeviceSetupFlowSiriCapabilitiesHint;

@interface SVXDeviceSetupFlowScene : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sceneID;
@property (readonly, copy, nonatomic) NSString *speakableText;
@property (readonly, copy, nonatomic) NSArray *displayKeyFrames;
@property (readonly, copy, nonatomic) SVXDeviceSetupFlowSiriCapabilitiesHint *siriCapabilitiesHint;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSceneID:(long long)a0 speakableText:(id)a1 displayKeyFrames:(id)a2 siriCapabilitiesHint:(id)a3;

@end
