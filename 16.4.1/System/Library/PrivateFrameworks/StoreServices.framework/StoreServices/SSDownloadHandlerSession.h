@class NSString, NSNumber;

@interface SSDownloadHandlerSession : SSDownloadSession {
    NSString *_downloadPhase;
}

@property (readonly) NSString *downloadPhase;
@property (readonly) NSNumber *duetTimeoutInterval;
@property BOOL blocksOtherDownloads;
@property BOOL canBePaused;
@property BOOL needsPowerAssertion;

- (void)setPercentComplete:(float)a0;
- (void)dealloc;
- (void)finishSessionWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_finishWithType:(int)a0 error:(id)a1;
- (id)_initWithMessage:(id)a0 controlConnection:(id)a1;
- (void)_setBool:(BOOL)a0 forSessionProperty:(const char *)a1;
- (void)disavowSessionWithError:(id)a0;
- (void)releaseSessionControl;
- (void)setStatusDescription:(id)a0;

@end
