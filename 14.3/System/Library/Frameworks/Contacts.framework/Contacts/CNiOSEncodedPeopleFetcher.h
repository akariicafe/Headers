@class CNManagedConfiguration, NSString, CNContactsEnvironment, CNContactFetchRequest;
@protocol CNContactsLogger, CNEncodedFetchCursor;

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor> {
    void *_addressBook;
    CNContactFetchRequest *_contactFetchRequest;
    CNContactsEnvironment *_environment;
    id /* block */ _completionHandler;
    id<CNEncodedFetchCursor> _cursor;
    id<CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)fetchEncodedPeopleWithError:(id *)a0 cancelationToken:(id)a1 batchHandler:(id /* block */)a2;
- (void)dealloc;
- (id)initWithFetchRequest:(id)a0 addressBook:(void *)a1 managedConfiguration:(id)a2 completionHandler:(id /* block */)a3 environment:(id)a4;
- (void)fetchNextBatchWithReply:(id /* block */)a0;

@end
