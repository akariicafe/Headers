@class NSArray;

@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation

@property (copy, nonatomic) NSArray *responses;
@property (copy, nonatomic) NSArray *requests;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)a0 requests:(id)a1;
- (id)initWithMediaLibrary:(id)a0;

@end
