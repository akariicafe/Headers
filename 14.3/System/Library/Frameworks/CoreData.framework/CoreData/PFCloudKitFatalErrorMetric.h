@class NSString;

@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric

@property (readonly, nonatomic) NSString *requestClass;

- (id)payload;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)a0 result:(id)a1;
- (id)name;

@end
