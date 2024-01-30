@class NSString;

@interface HMBulletinObjectTuple : NSObject

@property (readonly, nonatomic) NSString *queryName;
@property (readonly, nonatomic) NSString *uuidString;

+ (id)tupleWithQueryType:(long long)a0 uuidString:(id)a1;

- (void).cxx_destruct;
- (id)initWithQueryType:(long long)a0 uuidString:(id)a1;

@end
