@class NSString;

@interface NUMailPresenter : NSObject <SXMailPresenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canComposeMail;
- (void)presentMail:(id)a0;

@end
