@class NSArray;

@interface HDVerifiableClinicalRecordQueryServer : HDQueryServer

@property (readonly, nonatomic) NSArray *recordTypes;

+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;

@end
