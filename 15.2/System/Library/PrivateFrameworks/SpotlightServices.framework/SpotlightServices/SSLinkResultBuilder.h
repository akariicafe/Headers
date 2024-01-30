@class NSURL, NSArray, NSString;

@interface SSLinkResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSArray *senderContactIdentifiers;
@property (retain, nonatomic) NSString *coreSpotlightId;
@property (nonatomic) unsigned long long syndicationStatus;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
