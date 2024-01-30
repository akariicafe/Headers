@class NSString, AFTestRequestOptions, NSNumber;

@interface _AFTestRequestOptionsMutation : NSObject <AFTestRequestOptionsMutating> {
    AFTestRequestOptions *_baseModel;
    long long _requestPath;
    NSString *_inputOrigin;
    NSNumber *_isEyesFree;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasRequestPath : 1; unsigned char hasInputOrigin : 1; unsigned char hasIsEyesFree : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setRequestPath:(long long)a0;
- (void)setInputOrigin:(id)a0;
- (void)setIsEyesFree:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
