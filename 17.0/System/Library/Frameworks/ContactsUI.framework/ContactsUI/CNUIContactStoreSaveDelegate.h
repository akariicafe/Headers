@class NSString;

@interface CNUIContactStoreSaveDelegate : NSObject <CNSaveRequestDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)saveRequest:(id)a0 shouldProceedAfterError:(id)a1;

@end
