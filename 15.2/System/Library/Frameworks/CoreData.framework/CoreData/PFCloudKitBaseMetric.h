@class NSString, NSDictionary;

@interface PFCloudKitBaseMetric : NSObject <PFCloudKitMetric> {
    NSString *_containerIdentifier;
    NSString *_processName;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *payload;

- (id)description;
- (id)initWithContainerIdentifier:(id)a0;
- (void)dealloc;

@end
