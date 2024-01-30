@class NSString, PHASEMetaParameter;

@interface PHASEMixer : NSObject

@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double gain;
@property (readonly, nonatomic) PHASEMetaParameter *gainMetaParameter;

+ (id)new;

- (id)initWithIdentifier:(id)a0;
- (void)setUid:(id)a0;
- (id)uid;
- (id)initWithUID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
