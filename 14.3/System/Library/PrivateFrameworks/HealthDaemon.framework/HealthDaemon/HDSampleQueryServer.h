@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer {
    BOOL _suspended;
}

@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) BOOL includeAutomaticTimeZones;
@property (readonly, nonatomic) BOOL includeContributorInformation;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (BOOL)validateConfiguration:(id *)a0;

@end
