@class NSError, VUIMediaItemEntityTypesFetchResponse, VUIPlistMediaDatabase;

@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIPlistMediaDatabase *database;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response;
@property (copy, nonatomic) NSError *error;

- (id)initWithDatabase:(id)a0;
- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;

@end
