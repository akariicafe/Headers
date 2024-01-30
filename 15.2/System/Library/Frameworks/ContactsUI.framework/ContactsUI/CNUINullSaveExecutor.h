@class NSString;

@interface CNUINullSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeSaveWithConfiguration:(id)a0 saveDelegate:(id)a1;

@end
