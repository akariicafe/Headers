@class NSString, ARPHomeControlCorrelationUtilities;
@protocol _DKKnowledgeQuerying;

@interface ARPHomeControlMicrolocationCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) ARPHomeControlCorrelationUtilities *utilities;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithCorrelationsFile:(id)a0 knowledgeStore:(id)a1;
- (void)registerARPHomeControlNotificationTask;

@end
