@class NSString;

@interface AFSiriActivationHandlerCoreSpeechDaemon : NSObject <AFSiriActivationHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleContext:(id)a0 completion:(id /* block */)a1;

@end
