@class NSData;

@interface CNFetchResult : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, copy, nonatomic) NSData *currentHistoryToken;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 currentHistoryToken:(id)a1;
- (id)description;

@end
