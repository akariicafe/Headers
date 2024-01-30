@class NSString;

@interface AMDAppTabInfo : NSManagedObject

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *useCaseId;

+ (id)fetchRequest;
+ (id)deleteAllTabs:(id *)a0;
+ (id)deleteTabsForUseCase:(id)a0 error:(id *)a1;
+ (id)fetchAllTabInfo:(id *)a0;
+ (id)getInfoForTab:(id)a0 error:(id *)a1;
+ (id)refreshTabsForUseCase:(id)a0 tabs:(id)a1 error:(id *)a2;
+ (void)saveTabInfo:(id)a0 error:(id *)a1;

@end
