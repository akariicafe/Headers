@class NSString;
@protocol _DKKnowledgeQuerying;

@interface ARPCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithCorrelationsFile:(id)a0 knowledgeStore:(id)a1;
- (id)longFormVideoAppBundleIDs;

@end
