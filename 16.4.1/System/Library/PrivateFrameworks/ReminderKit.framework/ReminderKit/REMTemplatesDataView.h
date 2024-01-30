@class REMStore;

@interface REMTemplatesDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)initWithStore:(id)a0;
- (id)fetchTemplateWithObjectID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)fetchTemplatesInAccount:(id)a0 error:(id *)a1;
- (id)fetchTemplatesWithObjectIDs:(id)a0 error:(id *)a1;
- (id)templatesFromTemplateStorages:(id)a0 store:(id)a1;

@end
