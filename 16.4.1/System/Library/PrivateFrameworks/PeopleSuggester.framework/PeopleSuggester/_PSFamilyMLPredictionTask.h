@class NSString;
@protocol _DKKnowledgeSaving, _DKKnowledgeQuerying;

@interface _PSFamilyMLPredictionTask : NSObject

@property (readonly, copy, nonatomic) NSString *directory;
@property (retain, nonatomic) id<_DKKnowledgeQuerying, _DKKnowledgeSaving> knowledgeStore;

- (void)execute:(id)a0;
- (id)contactKeysToFetch;
- (void).cxx_destruct;
- (id)contactsInContactStore;
- (id)knowledgeEventUsingPredictions:(id)a0 familyRelations:(id)a1;

@end
