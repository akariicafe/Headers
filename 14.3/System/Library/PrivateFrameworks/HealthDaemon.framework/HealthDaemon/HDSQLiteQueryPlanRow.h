@class NSString;

@interface HDSQLiteQueryPlanRow : NSObject

@property (readonly, nonatomic) long long selectID;
@property (readonly, nonatomic) long long order;
@property (readonly, nonatomic) long long from;
@property (readonly, copy, nonatomic) NSString *detail;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSelectID:(long long)a0 order:(long long)a1 from:(long long)a2 detail:(id)a3;

@end
