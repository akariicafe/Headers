@class NSString, NSDictionary;

@interface PGGraphHighlightCollectionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {
    NSDictionary *_options;
}

@property (class, readonly, nonatomic) BOOL supportsBackgroundJob;
@property (class, readonly, nonatomic) double backgroundJobTimeout;
@property (class, readonly, nonatomic) NSString *backgroundJobName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
