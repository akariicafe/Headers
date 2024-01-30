@class NSString, SVXClientInfo;

@interface _SVXClientInfoMutation : NSObject <SVXClientInfoMutating> {
    SVXClientInfo *_baseModel;
    int _processIdentifier;
    NSString *_processName;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasProcessIdentifier : 1; unsigned char hasProcessName : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProcessName:(id)a0;
- (void)setProcessIdentifier:(int)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;

@end
