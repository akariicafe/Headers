@class NSString;

@interface FCCKDatabaseLoggingMiddleware : NSObject <FCCKDatabaseOperationMiddleware>

@property (nonatomic) BOOL allowNilDesiredKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
