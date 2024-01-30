@class NSArray;

@interface ASGetOptionsTask : ASTask {
    NSArray *_versionArray;
    NSArray *_commandArray;
}

+ (void)__setUsePort:(BOOL)a0;

- (id)_url;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (int)commandCode;
- (BOOL)processContext:(id)a0;
- (BOOL)_shouldSendAuthForRequest:(id)a0;
- (BOOL)shouldStallAfterConnectionLost;
- (BOOL)requiresEASVersionInformaton;
- (void)setVersionArray:(id)a0;
- (void)setCommandArray:(id)a0;
- (id)commandArray;
- (id)versionArray;

@end
