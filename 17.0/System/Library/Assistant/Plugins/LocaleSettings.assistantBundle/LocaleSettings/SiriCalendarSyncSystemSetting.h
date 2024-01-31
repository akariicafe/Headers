@class NSString;

@interface SiriCalendarSyncSystemSetting : NSObject <AFSyncHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 forKey:(id)a2 beginInfo:(id)a3;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;

@end
