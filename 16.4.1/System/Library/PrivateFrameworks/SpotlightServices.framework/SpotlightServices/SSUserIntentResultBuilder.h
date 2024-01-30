@class NSString, NSDate;

@interface SSUserIntentResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isBackgroundRunnable;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *intentName;
@property (retain, nonatomic) NSString *punchoutLabel;
@property (retain, nonatomic) NSString *userActivityRequiredString;

+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildResult;
- (id)buildThumbnail;

@end
