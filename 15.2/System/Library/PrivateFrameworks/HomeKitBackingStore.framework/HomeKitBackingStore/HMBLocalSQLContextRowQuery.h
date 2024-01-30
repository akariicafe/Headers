@class NSDictionary;

@interface HMBLocalSQLContextRowQuery : HMFObject

@property (readonly, nonatomic) unsigned long long recordRow;
@property (readonly, nonatomic) NSDictionary *tuples;

- (void).cxx_destruct;
- (id)initWithRecordRow:(unsigned long long)a0 tuples:(id)a1;

@end
