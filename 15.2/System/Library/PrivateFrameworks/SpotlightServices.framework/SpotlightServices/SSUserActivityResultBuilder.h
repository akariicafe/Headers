@class NSString;

@interface SSUserActivityResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *userActivityName;
@property (retain, nonatomic) NSString *userActivityRequiredString;

+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildThumbnail;

@end
