@class NSString, MPMediaLibraryEntityTranslator, MPModelLibraryDownloadQueueRequest, MPMediaLibraryEntityTranslationContext;

@interface _MPModelLibraryDownloadQueueDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPModelLibraryDownloadQueueRequest *_request;
    MPMediaLibraryEntityTranslator *_entityTranslator;
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult *__ptr_; struct __shared_weak_count *__cntrl_; } _entityQueryResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiersForItemAtIndexPath:(id)a0;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)itemAtIndexPath:(id)a0;

@end
