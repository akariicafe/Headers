@class NSString;

@interface HMDHomeInviteLogEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int stage;
@property (readonly, nonatomic) int responseType;

+ (id)uuid;
+ (id)homeInvitationWithStage:(int)a0;
+ (id)homeInvitationWithStage:(int)a0 responseType:(int)a1;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (id)initInvitationWithStage:(int)a0 responseType:(int)a1;

@end
