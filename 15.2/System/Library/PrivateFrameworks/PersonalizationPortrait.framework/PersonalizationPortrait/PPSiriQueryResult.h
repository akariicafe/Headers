@class NSString, NSNumber;

@interface PPSiriQueryResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *qid;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSNumber *confidence;

+ (id)siriQueryResultWithQid:(id)a0 domain:(id)a1 confidence:(id)a2;

- (id)initWithQid:(id)a0 domain:(id)a1 confidence:(id)a2;
- (BOOL)isEqualToSiriQueryResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
