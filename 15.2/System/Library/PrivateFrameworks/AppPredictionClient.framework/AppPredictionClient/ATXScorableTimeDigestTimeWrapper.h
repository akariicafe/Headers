@class NSString;

@interface ATXScorableTimeDigestTimeWrapper : NSObject <ATXScorableTimePeriodProtocol>

@property (readonly, nonatomic) long long digestTime;
@property (readonly, nonatomic) NSString *scorableTimeIdentifier;
@property (readonly, nonatomic) NSString *legacyScorableTimeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDigestTime:(long long)a0;

@end
