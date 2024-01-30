@class NSString;

@interface WFShortcutsV3CustomModificationsStep : NSObject <WFProgressiveMigrationCustomModificationsStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)performModificationsWithContext:(id)a0 error:(id *)a1;

@end
