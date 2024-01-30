@class NSString;

@interface BKSBacklightFeatures : NSObject <BSProtobufSerializable>

@property (nonatomic) BOOL disableFeatures;
@property (nonatomic) float fixedBrightnessNitsWhileDisabled;
@property (nonatomic) float fixedBrightnessLevelWhileDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;

@end
