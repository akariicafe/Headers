@class NSString;

@interface MFMailMessageLibraryAddMailboxActionsUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_readSavedOperationsAtPath:(id)a0;
+ (int)runWithConnection:(id)a0;


@end
