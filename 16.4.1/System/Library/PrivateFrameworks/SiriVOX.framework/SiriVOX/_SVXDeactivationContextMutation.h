@class SVXDeactivationOptions, NSString, SVXDeactivationContext, NSDictionary, SVXButtonEvent, SVXClientInfo;

@interface _SVXDeactivationContextMutation : NSObject <SVXDeactivationContextMutating> {
    SVXDeactivationContext *_baseModel;
    long long _source;
    unsigned long long _timestamp;
    SVXButtonEvent *_buttonEvent;
    SVXClientInfo *_clientInfo;
    NSDictionary *_userInfo;
    SVXDeactivationOptions *_options;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSource : 1; unsigned char hasTimestamp : 1; unsigned char hasButtonEvent : 1; unsigned char hasClientInfo : 1; unsigned char hasUserInfo : 1; unsigned char hasOptions : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClientInfo:(id)a0;
- (void)setSource:(long long)a0;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setUserInfo:(id)a0;
- (id)generate;
- (id)init;
- (void)setOptions:(id)a0;
- (void)setButtonEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;

@end
