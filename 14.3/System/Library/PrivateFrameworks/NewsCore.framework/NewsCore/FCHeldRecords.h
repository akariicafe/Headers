@class NSDictionary, FCInterestToken, NSArray;

@interface FCHeldRecords : NSObject

@property (readonly, nonatomic) NSDictionary *recordsByID;
@property (readonly, nonatomic) NSDictionary *interestTokensByID;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id onlyRecord;
@property (readonly, nonatomic) FCInterestToken *onlyInterestToken;
@property (readonly, nonatomic) NSArray *allRecordIDs;
@property (readonly, nonatomic) NSArray *allRecords;

+ (id)heldRecordsByMerging:(id)a0 with:(id)a1;

- (id)interestTokenForID:(id)a0;
- (void).cxx_destruct;
- (id)transformRecordsByIDWithBlock:(id /* block */)a0;
- (void)enumerateRecordsAndInterestTokensInOrder:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithRecordsByID:(id)a0 interestTokensByID:(id)a1;
- (void)enumerateRecordsAndInterestTokensWithBlock:(id /* block */)a0;
- (id)heldRecordsPassingTest:(id /* block */)a0;
- (id)transformRecordsWithBlock:(id /* block */)a0;
- (id)recordWithID:(id)a0;
- (id)heldRecordsForIDs:(id)a0;
- (id)transformRecordsInOrder:(id)a0 withBlock:(id /* block */)a1;

@end
