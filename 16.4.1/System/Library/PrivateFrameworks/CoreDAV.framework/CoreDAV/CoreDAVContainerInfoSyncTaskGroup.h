@class NSString, NSURL;
@protocol CoreDAVContainerInfoSyncProvider;

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    NSString *_previousSyncToken;
    NSURL *_containerURL;
}

@property (weak, nonatomic) id<CoreDAVContainerInfoSyncProvider> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (Class)containerItemClass;
- (id)copyContainerParserMappings;
- (void).cxx_destruct;
- (id)initWithContainerURL:(id)a0 previousSyncToken:(id)a1 accountInfoProvider:(id)a2 taskManager:(id)a3;

@end
