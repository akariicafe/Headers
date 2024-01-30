@interface PKVectorTimestampElement : NSObject

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
