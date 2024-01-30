@class NSString, NSUUID, HDProfile, NSMutableArray;

@interface _HDObjectAuthorizationPromptSession : NSObject {
    HDProfile *_profile;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    BOOL _didStartTransaction;
}

@property (copy, nonatomic) id /* block */ sessionCompletion;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long requestCount;
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;

- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addRequest:(id)a0;
- (void)beginPromptTransactionWithCompletion:(id /* block */)a0;
- (void)endPromptTransactionWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 profile:(id)a1;
- (void)beginPromptSessionWithCompletion:(id /* block */)a0;
- (id)sessionDescriptor;
- (void)timeoutExpired;

@end
