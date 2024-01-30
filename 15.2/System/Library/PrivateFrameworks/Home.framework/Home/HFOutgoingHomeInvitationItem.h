@class HMOutgoingHomeInvitation, NSString;
@protocol HFHomeKitObject;

@interface HFOutgoingHomeInvitationItem : HFItem <HFHomeKitItemProtocol, NSCopying>

@property (readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
