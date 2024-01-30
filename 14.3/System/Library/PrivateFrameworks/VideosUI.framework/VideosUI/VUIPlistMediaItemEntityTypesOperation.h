@class NSError, VUIMediaItemEntityTypesFetchResponse, VUIPlistMediaDatabase;

@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIPlistMediaDatabase *database;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response;
@property (copy, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (void)executionDidBegin;

@end
