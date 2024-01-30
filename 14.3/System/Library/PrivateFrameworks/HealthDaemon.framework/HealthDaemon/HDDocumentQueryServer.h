@class NSArray;

@interface HDDocumentQueryServer : HDQueryServer {
    BOOL _suspended;
    NSArray *_authorizedSamples;
    unsigned long long _clientSampleIndex;
}

@property (readonly, nonatomic) unsigned long long maxResults;
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) BOOL includeDocumentData;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (BOOL)_deliverOneSample:(id)a0 client:(id)a1 errorOut:(id *)a2;
- (id)samplesBeforeAuthorizationWithSortDescriptors:(id)a0 errorOut:(id *)a1;
- (BOOL)_deliverAuthorizedSamplesToClient:(id)a0 errorOut:(id *)a1;
- (void)authorizeSamples:(id)a0 completion:(id /* block */)a1;

@end
