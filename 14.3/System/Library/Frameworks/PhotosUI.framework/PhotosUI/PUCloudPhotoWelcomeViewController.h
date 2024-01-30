@class NSString;

@interface PUCloudPhotoWelcomeViewController : PXCloudPhotoWelcomeViewController <PUWelcomeProtocol>

@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentIfNecessaryFromViewController:(id)a0 completionHandler:(id /* block */)a1;
+ (void)resetLastPresentationInfo;

@end
