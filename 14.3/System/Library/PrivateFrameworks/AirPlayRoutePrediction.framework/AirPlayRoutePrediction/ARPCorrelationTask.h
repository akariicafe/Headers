@class NSString;
@protocol _DKKnowledgeQuerying;

@interface ARPCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithCorrelationsFile:(id)a0 knowledgeStore:(id)a1;
- (id)longFormVideoAppBundleIDs;

@end
