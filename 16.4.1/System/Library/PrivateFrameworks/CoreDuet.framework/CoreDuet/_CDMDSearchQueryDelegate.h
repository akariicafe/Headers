@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface _CDMDSearchQueryDelegate : NSObject <MDSearchQueryDelegate> {
    NSObject<OS_dispatch_semaphore> *_mdQuerySem;
    NSMutableArray *_recentMDSearchQueryResults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)searchQuery:(id)a0 didFailWithError:(id)a1;
- (void)searchQuery:(id)a0 didReturnItems:(id)a1;
- (void)searchQuery:(id)a0 statusChanged:(unsigned long long)a1;

@end
