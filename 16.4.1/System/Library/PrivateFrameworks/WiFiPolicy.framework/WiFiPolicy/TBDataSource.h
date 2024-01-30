@class NSString;

@interface TBDataSource : NSObject <TBFetchProvider>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitAnalyticsEventForFetchRequest:(id)a0 duration:(double)a1 error:(id)a2 resultCount:(long long)a3;
- (void)executeFetchRequest:(id)a0;

@end
