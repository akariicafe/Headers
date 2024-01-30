@class CSSearchQuery, NSString, NSDictionary, NSPredicate, NSObject;
@protocol OS_dispatch_queue, MDSearchQueryDelegate;

@interface MDSearchQuery : NSObject {
    unsigned long long _status;
}

@property (copy) NSPredicate *predicate;
@property unsigned long long status;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSSearchQuery *query;
@property (retain) NSString *clientBundleID;
@property (readonly, copy) NSDictionary *options;
@property (weak) id<MDSearchQueryDelegate> delegate;

- (void)cancel;
- (void).cxx_destruct;
- (id)queryString;
- (id)initWithQueryString:(id)a0 options:(id)a1;
- (void)start;
- (id)initWithPredicate:(id)a0 options:(id)a1;
- (void)_didFinishWithError:(id)a0;
- (void)_didReturnItems:(id)a0;

@end
