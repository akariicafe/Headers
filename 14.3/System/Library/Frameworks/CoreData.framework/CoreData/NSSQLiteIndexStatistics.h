@class NSString;

@interface NSSQLiteIndexStatistics : NSObject

@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) NSString *indexName;
@property (readonly, nonatomic) long long executionCount;
@property (readonly, nonatomic) long long instructionCount;
@property (readonly, nonatomic) long long rowCount;

- (id)init;
- (void)dealloc;
- (id)initWithResultDictionary:(id)a0 storeID:(id)a1;
- (void)addStatistics:(id)a0;
- (id)initWithName:(id)a0 storeID:(id)a1;
- (void)incrementExecutionCountWithInstructionCount:(long long)a0 rowCount:(long long)a1;

@end
