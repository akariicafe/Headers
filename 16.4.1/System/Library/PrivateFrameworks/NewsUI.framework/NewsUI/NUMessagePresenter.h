@class NSString;

@interface NUMessagePresenter : NSObject <SXMessagePresenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentMessage:(id)a0;
- (BOOL)canPresentMessage;

@end
