@class NSString, AFDeleteSiriHistoryContext;

@interface _AFDeleteSiriHistoryContextMutation : NSObject <AFDeleteSiriHistoryContextMutating> {
    AFDeleteSiriHistoryContext *_baseModel;
    NSString *_successTitle;
    NSString *_successBody;
    NSString *_successButtonText;
    NSString *_errorTitle;
    NSString *_errorBody;
    NSString *_errorButtonText;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSuccessTitle : 1; unsigned char hasSuccessBody : 1; unsigned char hasSuccessButtonText : 1; unsigned char hasErrorTitle : 1; unsigned char hasErrorBody : 1; unsigned char hasErrorButtonText : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setSuccessTitle:(id)a0;
- (void)setSuccessBody:(id)a0;
- (void)setSuccessButtonText:(id)a0;
- (void)setErrorTitle:(id)a0;
- (void)setErrorBody:(id)a0;
- (void)setErrorButtonText:(id)a0;
- (id)initWithBaseModel:(id)a0;

@end
