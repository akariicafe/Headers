@class NSString, NSURL;

@interface SSApplicationResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *appURL;

+ (id)bundleId;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildCompactCardSections;
- (id)buildResult;

@end
