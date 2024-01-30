@class NSString, AVWeakReference;

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {
    AVWeakReference *_weakReference;
    unsigned long long _requestID;
}

@property (readonly, nonatomic) unsigned long long _requestID;
@property (readonly, nonatomic) struct __CFDictionary { } *_requestInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (id)init;
- (void)dealloc;
- (void)_performCancellationByClient;
- (id)initWithProtectionSpace:(id)a0 proposedCredential:(id)a1 previousFailureCount:(long long)a2 failureResponse:(id)a3 error:(id)a4 sender:(id)a5;
- (BOOL)_shouldInformDelegateOfFigCancellation;
- (id)_weakReference;
- (id)initWithAuthenticationChallenge:(id)a0 sender:(id)a1;
- (id)initWithAuthenticationChallenge:(id)a0 sender:(id)a1 requestInfo:(struct __CFDictionary { } *)a2 requestID:(unsigned long long)a3;

@end
