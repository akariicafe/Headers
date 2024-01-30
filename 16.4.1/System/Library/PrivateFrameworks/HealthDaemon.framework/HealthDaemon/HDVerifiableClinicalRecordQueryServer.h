@class NSArray;

@interface HDVerifiableClinicalRecordQueryServer : HDQueryServer

@property (readonly, nonatomic) NSArray *recordTypes;
@property (readonly, nonatomic) NSArray *sourceTypes;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
