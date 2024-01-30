@class NSArray, NSNumber, SAUIListenAfterSpeakingBehavior;

@interface SAUIAddDialogs : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *dialogs;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
