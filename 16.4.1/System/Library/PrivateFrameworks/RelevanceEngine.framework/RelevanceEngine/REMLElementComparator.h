@class NSArray, REMLModel;

@interface REMLElementComparator : NSObject <NSCopying> {
    REMLModel *_model;
}

@property (copy, nonatomic) NSArray *filteringRules;
@property (copy, nonatomic) NSArray *rankingRules;
@property (readonly, nonatomic) unsigned long long comparisonLevels;

+ (id)comparatorWithFilteringRules:(id)a0 rankingRules:(id)a1 model:(id)a2;

- (id)initWithModel:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)model;
- (void).cxx_destruct;
- (long long)compareElement:(id)a0 toElement:(id)a1 level:(unsigned long long)a2;
- (BOOL)shouldHideElement:(id)a0;

@end
