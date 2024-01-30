@class NSString, NSNumber;

@interface PPSiriQueryResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *qid;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSNumber *confidence;

+ (id)siriQueryResultWithQid:(id)a0 domain:(id)a1 confidence:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQid:(id)a0 domain:(id)a1 confidence:(id)a2;
- (BOOL)isEqualToSiriQueryResult:(id)a0;

@end
