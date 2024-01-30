@class NSString, NSDictionary;

@interface PFCloudKitBaseMetric : NSObject <PFCloudKitMetric>

@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *payload;

- (void)dealloc;
- (id)description;
- (id)initWithContainerIdentifier:(id)a0;

@end
