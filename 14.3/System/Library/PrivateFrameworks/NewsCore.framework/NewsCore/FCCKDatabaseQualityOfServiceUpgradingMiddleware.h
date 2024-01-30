@class NSString;

@interface FCCKDatabaseQualityOfServiceUpgradingMiddleware : NSObject <FCCKDatabaseOperationMiddleware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)database:(id)a0 willEnqueueOperation:(id)a1 error:(id *)a2;

@end
