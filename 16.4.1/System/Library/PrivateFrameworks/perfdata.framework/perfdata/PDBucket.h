@class NSString;

@interface PDBucket : NSObject

@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;
@property (nonatomic) BOOL hasInclusiveUpperBound;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;
@property (nonatomic) BOOL hasInclusiveUpperBound;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *label;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
