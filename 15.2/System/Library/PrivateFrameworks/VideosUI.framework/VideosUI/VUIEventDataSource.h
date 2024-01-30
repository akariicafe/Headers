@class VUIDocumentDataSource, VUIAction;

@interface VUIEventDataSource : NSObject

@property (retain, nonatomic) VUIDocumentDataSource *preActionDocumentDataSource;
@property (retain, nonatomic) VUIAction *preAction;
@property (retain, nonatomic) VUIDocumentDataSource *documentDataSource;
@property (retain, nonatomic) VUIAction *action;
@property (retain, nonatomic) VUIDocumentDataSource *postActionDocumentDataSource;
@property (retain, nonatomic) VUIAction *postAction;

+ (id)eventDataSourceWithEventDict:(id)a0 appContext:(id)a1;
+ (id)attachPrefetchedDict:(id)a0 eventDict:(id)a1;
+ (id)_documentDataSourceWithDict:(id)a0;
+ (id)_actionForKey:(id)a0 eventDict:(id)a1 appContext:(id)a2;

- (void).cxx_destruct;

@end
