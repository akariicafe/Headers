@class NSString, MPMediaQuery, MPUSearchDataSource;

@interface _MPUSearchOperation : NSOperation {
    long long _entityType;
    MPMediaQuery *_query;
}

@property (readonly, weak, nonatomic) MPUSearchDataSource *dataSource;
@property (readonly, copy, nonatomic) NSString *searchString;

- (void).cxx_destruct;
- (void)main;
- (id)description;
- (id)initWithSearchDataSource:(id)a0 searchString:(id)a1;
- (void)executeSearch;

@end
