@class NSArray;

@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation

@property (copy, nonatomic) NSArray *responses;
@property (copy, nonatomic) NSArray *requests;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)initWithMediaLibrary:(id)a0;
- (id)initWithMediaLibrary:(id)a0 requests:(id)a1;

@end
