@class HMHomeInvitationData, NSUUID, _HMContext, NSURL, NSDate, NSString, HMHome;

@interface HMHomeInvitation : NSObject <HMObjectMerge, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) HMHomeInvitationData *invitationData;
@property (weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long invitationState;
@property (readonly, nonatomic) NSURL *homeObjectURL;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)_updateInvitationState:(long long)a0;
- (void)cancelInviteWithCompletionHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0 invitationData:(id)a1;
- (id)initWithInvitationData:(id)a0 home:(id)a1;

@end
