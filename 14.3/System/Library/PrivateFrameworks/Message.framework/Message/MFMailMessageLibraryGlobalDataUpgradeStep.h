@class NSString;

@interface MFMailMessageLibraryGlobalDataUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)runWithConnection:(id)a0;
+ (id)_messagesTableDefinition;
+ (BOOL)_recreateMessagesIndices:(id)a0;
+ (id)_triggerDefinition;


@end
