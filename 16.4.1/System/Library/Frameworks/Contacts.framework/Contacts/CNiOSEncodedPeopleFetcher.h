@class CNManagedConfiguration, NSString, CNContactsEnvironment, CNContactFetchRequest;
@protocol CNContactsLogger, CNEncodedFetchCursor;

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor> {
    void *_addressBook;
    CNContactFetchRequest *_contactFetchRequest;
    CNContactsEnvironment *_environment;
    id /* block */ _addressBookCompletionHandler;
    id /* block */ _cursorCompletionHandler;
    id<CNEncodedFetchCursor> _cursor;
    id<CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
    long long _identifierAuditMode;
}

@property (nonatomic) BOOL preferLinkIdentifiersForIdentifierAudit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFetchRequest:(id)a0 addressBook:(void *)a1 managedConfiguration:(id)a2 addressBookCompletionHandler:(id /* block */)a3 cursorCompletionHandler:(id /* block */)a4 environment:(id)a5 identifierAuditMode:(long long)a6;
- (BOOL)fetchEncodedPeopleWithError:(id *)a0 cancelationToken:(id)a1 batchHandler:(id /* block */)a2;
- (void)dealloc;
- (void)fetchNextBatchWithReply:(id /* block */)a0;
- (void).cxx_destruct;

@end
