@class NSArray, NSDictionary;

@interface KGElementFilter : NSObject

@property (readonly, nonatomic) NSArray *requiredLabels;
@property (readonly, nonatomic) NSArray *optionalLabels;
@property (readonly, nonatomic) NSDictionary *properties;
@property (nonatomic) BOOL includeTombstones;
@property (readonly, nonatomic) BOOL isTrivial;

+ (id)any;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)matchesElement:(id)a0;
- (id)initWithRequiredLabels:(id)a0 optionalLabels:(id)a1 properties:(id)a2;
- (BOOL)matchesLabels:(id)a0;
- (BOOL)matchesProperties:(id)a0;

@end
