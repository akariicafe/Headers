@class DKReporterRegistry;

@interface DKReportPlanner : NSObject

@property (retain, nonatomic) DKReporterRegistry *registry;

+ (id)plannerWithReportGeneratorRegistry:(id)a0;

- (void).cxx_destruct;
- (id)requestGroupsForPredicateManifest:(id)a0;
- (id)initWithReportGeneratorRegistry:(id)a0;
- (id)_resolveComponentIdentityManifest:(id)a0;

@end
