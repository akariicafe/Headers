@class NSString, CNUICoreContactEditingSession;

@interface CNUIEditingSessionSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly, nonatomic) CNUICoreContactEditingSession *editingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
