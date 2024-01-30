@class CNContactStore, NSArray, CNResult, CNAutocompleteFetchRequest, CNCancelationToken;

@interface CNADirectoryServerSearchTask : CNTask {
    CNResult *_returnValue;
    NSArray *_containers;
    NSArray *_daResults;
    NSArray *_results;
}

@property (readonly, nonatomic) CNAutocompleteFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNCancelationToken *cancelationToken;

- (id)run;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 contactStore:(id)a1 cancelationToken:(id)a2;
- (void)validateRequest;
- (void)fetchServerSearchContainers;
- (void)searchServerContainers;
- (void)convertResults;
- (void)createReturnValue;
- (id)makeQueryForContainer:(id)a0 withLatch:(id)a1 andCollectConsumers:(id)a2;

@end
