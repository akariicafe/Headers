@class NSString;

@interface HMDSyncOperationOptions : HMFObject

@property (readonly, nonatomic) unsigned long long operationType;
@property (readonly, nonatomic) NSString *zoneName;
@property (nonatomic, getter=isCloudConflict) BOOL cloudConflict;
@property (nonatomic, getter=isDelayRespected) BOOL delayRespected;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOperationType:(unsigned long long)a0 zoneName:(id)a1 cloudConflict:(BOOL)a2 delayRespected:(BOOL)a3;
- (id)initWithOperationType:(unsigned long long)a0 zoneName:(id)a1 delayRespected:(BOOL)a2;

@end
