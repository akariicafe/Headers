@class VUIPlistMediaLibrary, NSArray, NSError;

@interface VUIPlistMediaEntitiesFetchOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIPlistMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSArray *requests;
@property (retain, nonatomic) NSArray *responses;
@property (copy, nonatomic) NSError *error;

- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;
- (id)_collectionsFetchResponseWithRequest:(id)a0 error:(id *)a1;
- (id)_fetchResponseWithMediaEntities:(id)a0 request:(id)a1;
- (id)_itemsFetchResponseWithRequest:(id)a0 error:(id *)a1;
- (id)_mediaEntityKindForRequest:(id)a0;
- (id)initWithMediaLibrary:(id)a0 requests:(id)a1;

@end
