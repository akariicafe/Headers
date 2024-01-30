@protocol _DKKnowledgeQuerying;

@interface ARPHomeControlCorrelationUtilities : NSObject

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;

- (id)initWithKnowledgeStore:(id)a0;
- (BOOL)writeArchive:(id)a0 toFilePath:(id)a1;
- (void).cxx_destruct;
- (id)firstHomeKitEventsWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1;
- (id)homeKitAccessoriesWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1 limit:(long long)a2;
- (id)homeKitEventsWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1;
- (id)homeKitScenesWithPredicate:(id)a0 sortStartDateAscending:(BOOL)a1 limit:(long long)a2;

@end
