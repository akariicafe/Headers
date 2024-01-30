@protocol WFDatabaseProvider;

@interface WFShareSheetWorkflowProvider : NSObject

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;

- (void).cxx_destruct;
- (id)initWithDatabaseProvider:(id)a0;
- (id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)a0 hostBundleIdentifier:(id)a1 error:(id *)a2;
- (id)generateSingleUseTokenForWorkflowIdentifier:(id)a0;

@end
