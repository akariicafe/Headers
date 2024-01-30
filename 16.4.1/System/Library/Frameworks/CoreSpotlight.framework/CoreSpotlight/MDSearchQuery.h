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

- (void)_didFinishWithError:(id)a0;
- (void)cancel;
- (id)initWithQueryString:(id)a0 options:(id)a1;
- (id)queryString;
- (void)start;
- (void).cxx_destruct;
- (void)_didReturnItems:(id)a0;
- (id)initWithPredicate:(id)a0 options:(id)a1;

@end
