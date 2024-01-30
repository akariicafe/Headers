@class NSString, ICASCollaborationActionType, ICASCollaborationInviteStep;

@interface ICASCollaborationActionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASCollaborationActionType *collaborationActionType;
@property (readonly, nonatomic) ICASCollaborationInviteStep *collaborationInviteStep;
@property (readonly, nonatomic) NSString *collaborationMethod;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCollaborationActionType:(id)a0 collaborationInviteStep:(id)a1 collaborationMethod:(id)a2;

@end
