@class NSString, PHASEMetaParameter;

@interface PHASEMixer : NSObject

@property (nonatomic) struct weak_ptr<Phase::ActionTreeObject> { struct ActionTreeObject *__ptr_; struct __shared_weak_count *__cntrl_; } weakActionTreeObject;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double gain;
@property (readonly, nonatomic) PHASEMetaParameter *gainMetaParameter;

+ (id)new;

- (void)setUid:(id)a0;
- (id).cxx_construct;
- (id)initWithUID:(id)a0;
- (id)uid;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
