@class NSMutableSet, DKExtensionAdapter;

@interface DKReportingConcurrentRequest : NSObject

@property (retain, nonatomic) DKExtensionAdapter *generator;
@property (retain, nonatomic) NSMutableSet *manifest;

+ (id)concurrentRequestWithGenerator:(id)a0;

- (void).cxx_destruct;
- (id)initWithGenerator:(id)a0;

@end
