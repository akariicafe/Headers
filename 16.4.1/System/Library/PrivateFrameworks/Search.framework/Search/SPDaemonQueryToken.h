@class NSObject, NSString, SPSearchQuery;
@protocol SPDaemonQueryDelegate, OS_dispatch_queue;

@interface SPDaemonQueryToken : NSObject <NSCopying>

@property (readonly, weak, nonatomic) id<SPDaemonQueryDelegate> delegate;
@property (readonly, nonatomic) unsigned int queryID;
@property (readonly, nonatomic) SPSearchQuery *query;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL queryFinished;
@property (readonly) NSString *fbq;
@property (readonly) NSString *web_fbq;
@property (readonly, nonatomic) BOOL gotQueryComplete;
@property (nonatomic) BOOL didReissue;
@property (nonatomic) BOOL isLocalQuery;

- (void)queryDidComplete;
- (void)handleMessage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void).cxx_destruct;
- (void)handleLocalQueryWithResultSet:(id)a0;
- (id)initWithQuery:(id)a0 queue:(id)a1 delegate:(id)a2;

@end
