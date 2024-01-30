@class NSString, NSNumber;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric

@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSNumber *errorCode;

- (id)payload;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)a0 error:(id)a1;
- (id)name;

@end
