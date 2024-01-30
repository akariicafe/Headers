@class NSString;

@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric {
    NSString *_requestClass;
}

- (id)payload;
- (id)initWithContainerIdentifier:(id)a0 result:(id)a1;
- (void)dealloc;
- (id)name;

@end
