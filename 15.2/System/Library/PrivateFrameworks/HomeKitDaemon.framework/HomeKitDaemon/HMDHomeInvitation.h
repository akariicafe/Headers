@class NSUUID, NSDate, HMHomeInvitationData, HMFTimer, NSURL, NSArray, CKDeviceToDeviceShareInvitationToken, NSString, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) HMHomeInvitationData *invitationData;
@property (retain, nonatomic) NSUUID *idsInvitationUUID;
@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (copy, nonatomic) id /* block */ resolutionHandler;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (retain, nonatomic) HMFTimer *timer;
@property (retain, nonatomic) NSArray *operations;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long invitationState;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (readonly, nonatomic, getter=isAccepted) BOOL accepted;
@property (readonly, nonatomic, getter=isDeclined) BOOL declined;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void)_clearTimer;
- (void)encodeWithCoder:(id)a0;
- (void)accept;
- (void)decline;
- (void)expire;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 invitationData:(id)a1;
- (id)initWithInvitationData:(id)a0 forHome:(id)a1;
- (BOOL)refreshDisplayName;
- (void)notifyStateChangedForMessage:(id)a0;
- (void)updateInvitationState:(long long)a0;
- (void)updateTimer:(unsigned long long)a0 clientQueue:(id)a1;
- (void)_configureTimer;
- (void)_resolve:(BOOL)a0;
- (id)describeWithFormat;

@end
