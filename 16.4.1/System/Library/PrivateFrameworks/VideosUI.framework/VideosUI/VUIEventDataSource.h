@class VUIDocumentDataSource, VUIAction, VUIMediaEntity;

@interface VUIEventDataSource : NSObject

@property (retain, nonatomic) VUIMediaEntity *mediaEntity;
@property (retain, nonatomic) VUIDocumentDataSource *preActionDocumentDataSource;
@property (retain, nonatomic) VUIAction *preAction;
@property (retain, nonatomic) VUIDocumentDataSource *documentDataSource;
@property (retain, nonatomic) VUIAction *action;
@property (retain, nonatomic) VUIDocumentDataSource *postActionDocumentDataSource;
@property (retain, nonatomic) VUIAction *postAction;

+ (id)attachPrefetchedDict:(id)a0 eventDict:(id)a1;
+ (id)_actionForKey:(id)a0 eventDict:(id)a1 appContext:(id)a2;
+ (id)_documentDataSourceWithDict:(id)a0;
+ (id)eventDataSourceWithEventDict:(id)a0 appContext:(id)a1;
+ (id)selectEventDataSourceWithLibraryMediaEntity:(id)a0;

- (void).cxx_destruct;
- (id)_initWithLibraryMediaEntity:(id)a0;

@end
