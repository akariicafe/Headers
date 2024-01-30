@class NSString;

@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel

@property (copy, nonatomic) NSString *queryString;

- (id)scopes;
- (id)displayTitle;
- (void).cxx_destruct;
- (void)arrayController:(id)a0 modelChanged:(id)a1 differences:(id)a2;
- (id)initWithURL:(id)a0 pickableTypes:(id)a1 mode:(unsigned long long)a2;
- (id)_createObserver;
- (void)_updateObserverForQuery;
- (id)initWithPickableTypes:(id)a0 mode:(unsigned long long)a1;
- (BOOL)shouldShowTopLevelContainers;
- (void)startMonitoringChanges;

@end
