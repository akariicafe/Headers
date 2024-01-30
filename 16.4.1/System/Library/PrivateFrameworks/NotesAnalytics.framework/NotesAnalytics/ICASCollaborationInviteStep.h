@interface ICASCollaborationInviteStep : NSObject <AADataType>

@property (readonly, nonatomic) long long collaborationInviteStep;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCollaborationInviteStep:(long long)a0;

@end
