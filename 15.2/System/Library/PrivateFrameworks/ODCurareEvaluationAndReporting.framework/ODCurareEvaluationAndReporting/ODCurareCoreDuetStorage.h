@class NSString, _DKEventStream, NSObject;
@protocol _DKKnowledgeDeleting, _DKKnowledgeSaving, _DKKnowledgeQuerying;

@interface ODCurareCoreDuetStorage : NSObject

@property (retain) NSString *name;
@property (retain) _DKEventStream *stream;
@property (retain) NSObject<_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> *knowledgeStore;

+ (id)predicateWithIdentifier:(id)a0 withDate:(id)a1;

- (id)init:(id)a0;
- (BOOL)deleteAllData;
- (void).cxx_destruct;
- (BOOL)deleteData:(id /* block */)a0;
- (void)deleteDirectory:(id)a0;
- (BOOL)saveDictionaries:(id)a0 date:(id)a1 eventIdentifier:(id)a2;
- (BOOL)saveMetadata:(id)a0 date:(id)a1 eventIdentifier:(id)a2;
- (id)queryDataWithPredicate:(id)a0;
- (unsigned long long)deleteMultipleData:(id /* block */)a0;
- (BOOL)deleteDataWithPredicate:(id)a0;
- (unsigned long long)deleteMultipleDataWithPredicate:(id)a0;

@end
