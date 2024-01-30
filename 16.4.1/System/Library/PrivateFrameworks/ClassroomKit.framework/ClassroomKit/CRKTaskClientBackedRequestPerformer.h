@class CATTaskClient, NSString;

@interface CRKTaskClientBackedRequestPerformer : NSObject <CRKRequestPerformingProtocol>

@property (readonly, nonatomic) CATTaskClient *taskClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTaskClient:(id)a0;
- (id)operationForRequest:(id)a0;

@end
