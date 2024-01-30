@class NSNumber, NSString;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {
    NSNumber *_errorCode;
    NSString *_errorDomain;
}

- (id)payload;
- (id)name;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)a0 error:(id)a1;

@end
