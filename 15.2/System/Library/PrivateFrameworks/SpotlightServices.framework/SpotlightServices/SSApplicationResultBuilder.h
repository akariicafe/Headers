@class NSString;

@interface SSApplicationResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *name;

+ (id)bundleId;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildResult;
- (id)buildCompactCardSections;

@end
