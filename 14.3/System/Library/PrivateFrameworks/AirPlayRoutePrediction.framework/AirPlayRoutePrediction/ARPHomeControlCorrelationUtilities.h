@protocol _DKKnowledgeQuerying;

@interface ARPHomeControlCorrelationUtilities : NSObject

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;

- (void).cxx_destruct;
- (id)homeKitEventsWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1;
- (id)initWithKnowledgeStore:(id)a0;
- (id)homeKitAccessoriesWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1 limit:(long long)a2;
- (id)homeKitScenesWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1 limit:(long long)a2;
- (BOOL)writeArchive:(id)a0 toFilePath:(id)a1;
- (id)firstHomeKitEventsWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1;

@end
