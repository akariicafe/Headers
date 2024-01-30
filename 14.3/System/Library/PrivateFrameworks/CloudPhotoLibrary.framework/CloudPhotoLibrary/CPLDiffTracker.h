@class NSMutableSet;

@interface CPLDiffTracker : NSObject

@property (nonatomic) BOOL shouldCompareAllProperties;
@property (readonly, nonatomic) BOOL objectsAreTotallyDifferent;
@property (readonly, nonatomic) NSMutableSet *differingProperties;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)description;
- (void)noteObjectAreTotallyDifferent;
- (void)noteObjectsDifferOnProperty:(id)a0;
- (BOOL)areObjectsDifferentOnProperty:(id)a0;

@end
