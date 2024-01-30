@class NSArray;

@interface ASGetOptionsTask : ASTask {
    NSArray *_versionArray;
    NSArray *_commandArray;
}

+ (void)__setUsePort:(BOOL)a0;

- (id)requestBody;
- (void)finishWithError:(id)a0;
- (id)httpMethod;
- (void).cxx_destruct;
- (id)_url;
- (BOOL)processContext:(id)a0;
- (BOOL)_shouldSendAuthForRequest:(id)a0;
- (id)commandArray;
- (int)commandCode;
- (BOOL)requiresEASVersionInformaton;
- (void)setCommandArray:(id)a0;
- (void)setVersionArray:(id)a0;
- (BOOL)shouldStallAfterConnectionLost;
- (id)versionArray;

@end
