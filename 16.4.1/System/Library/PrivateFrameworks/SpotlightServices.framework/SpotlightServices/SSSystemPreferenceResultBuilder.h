@class NSString;

@interface SSSystemPreferenceResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *name;

+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;

@end
