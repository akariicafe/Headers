@class NSString;

@interface VUIInAppMessagingMessageTargetHandler : NSObject <IAMMessageTarget>

@property (readonly, nonatomic) NSString *targetIdentifier;
@property (readonly, nonatomic) BOOL shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageCoordinator:(id)a0 didUpdatePriorityMessage:(id)a1 forTarget:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTargetIdentifier:(id)a0;

@end
