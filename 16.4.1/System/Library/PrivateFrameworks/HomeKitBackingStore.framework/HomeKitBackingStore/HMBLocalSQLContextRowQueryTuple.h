@class NSData;

@interface HMBLocalSQLContextRowQueryTuple : HMFObject

@property (readonly, nonatomic) unsigned long long queryRow;
@property (readonly, nonatomic) NSData *queryData;

- (void).cxx_destruct;
- (id)initWithQueryRow:(unsigned long long)a0 data:(id)a1;

@end
