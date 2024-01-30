@class NSString, SVXUserFeedbackScene, NSSet;

@interface _SVXUserFeedbackSceneMutation : NSObject <SVXUserFeedbackSceneMutating> {
    SVXUserFeedbackScene *_baseModel;
    NSString *_identifier;
    double _duration;
    NSSet *_nodes;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasDuration : 1; unsigned char hasNodes : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIdentifier:(id)a0;
- (void)setNodes:(id)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (id)initWithBaseModel:(id)a0;

@end
