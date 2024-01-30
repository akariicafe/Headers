@class NSString, AFSiriHomeAutomationRequestInfo, NSData;

@interface _AFSiriHomeAutomationRequestInfoMutation : NSObject <AFSiriHomeAutomationRequestInfoMutating> {
    AFSiriHomeAutomationRequestInfo *_baseModel;
    NSData *_context;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasContext : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContext:(id)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;

@end
