@class NSString, CMArchiveManager, OCDDocument;

@interface CMMapper : NSObject <CMMapperRootArchiver> {
    CMMapper *mRoot;
    OCDDocument *_document;
    CMArchiveManager *mArchiver;
}

@property (readonly, weak) CMMapper *parent;
@property (retain) NSString *fileName;
@property (readonly) OCDDocument *document;

- (id)root;
- (id)archiver;
- (id)init;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)addAttribute:(id)a0 toNode:(id)a1 value:(id)a2;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)addStyleUsingGlobalCacheTo:(id)a0 style:(id)a1;
- (void)mapWithState:(id)a0;
- (void)addStyleUsingGlobalCacheTo:(id)a0 style:(id)a1 embedStyle:(BOOL)a2;
- (void)addStyle:(id)a0 withName:(id)a1;
- (void)mapStylesheetAt:(id)a0 stylesheet:(id)a1;
- (void)startMappingWithState:(id)a0;
- (void)mapElement:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 isLastElement:(BOOL)a3;
- (void)finishMappingWithState:(id)a0;

@end
