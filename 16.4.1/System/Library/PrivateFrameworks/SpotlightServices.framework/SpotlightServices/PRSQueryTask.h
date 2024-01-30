@class PRSSearchSession, NSString, NSDictionary, NSArray, SPSearchQueryContext, NSObject, PRSSearchFeedback;
@protocol OS_dispatch_queue, PRSSearchQueryHandler;

@interface PRSQueryTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL started;
@property (nonatomic) BOOL canceled;
@property (retain) PRSSearchFeedback *feedback;
@property (retain, nonatomic) id<PRSSearchQueryHandler> handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) PRSSearchSession *session;
@property (retain, nonatomic) NSString *fbq;
@property BOOL webSearch;
@property long long queryId;
@property (retain, nonatomic) NSDictionary *category_stats;
@property (retain, nonatomic) NSDictionary *server_features;
@property (retain, nonatomic) NSArray *parsecCategoryOrder;
@property (weak, nonatomic) id representedObject;
@property (readonly, nonatomic) SPSearchQueryContext *queryContext;
@property (retain, nonatomic) NSString *queryString;
@property unsigned long long queryIdent;

+ (void)initialize;
+ (void)suspendDecoding;
+ (void)resumeDecoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)resume;
- (void)invalidateHandler;
- (id)feedbackQueryIdentifier;
- (void)setParsecState:(BOOL)a0;
- (id)initWithSession:(id)a0 handler:(id)a1 queue:(id)a2 feedback:(id)a3 queryContext:(id)a4;

@end
