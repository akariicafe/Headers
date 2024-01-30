@class NSString;

@interface PocketAPIBlockDelegate : NSObject <PocketAPIDelegate>

@property (copy, nonatomic) id /* block */ loginHandler;
@property (copy, nonatomic) id /* block */ saveHandler;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateWithLoginHandler:(id /* block */)a0;
+ (id)delegateWithResponseHandler:(id /* block */)a0;
+ (id)delegateWithSaveHandler:(id /* block */)a0;

- (void)dealloc;
- (void)pocketAPI:(id)a0 failedToSaveURL:(id)a1 error:(id)a2;
- (void)pocketAPI:(id)a0 hadLoginError:(id)a1;
- (void)pocketAPI:(id)a0 receivedResponse:(id)a1 forAPIMethod:(id)a2 error:(id)a3;
- (void)pocketAPI:(id)a0 savedURL:(id)a1;
- (void)pocketAPILoggedIn:(id)a0;

@end
