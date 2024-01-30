@class DNDMode, NSString;

@interface ATXScorableTimeDNDModeWrapper : NSObject <ATXScorableTimePeriodProtocol>

@property (readonly, nonatomic) DNDMode *dndMode;
@property (readonly, nonatomic) NSString *scorableTimeIdentifier;
@property (readonly, nonatomic) NSString *legacyScorableTimeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDNDMode:(id)a0;

@end
