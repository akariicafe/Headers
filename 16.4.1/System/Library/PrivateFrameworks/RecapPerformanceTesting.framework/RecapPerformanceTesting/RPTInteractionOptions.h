@class RCPEventSenderProperties;

@interface RPTInteractionOptions : NSObject

@property (class, readonly) RPTInteractionOptions *defaultForPlatform;

@property (nonatomic) unsigned long long preferredIdiom;
@property (nonatomic) long long pointerFrequency;
@property (readonly, nonatomic) BOOL prefersPointer;
@property (readonly, nonatomic) RCPEventSenderProperties *senderProperties;

- (id)init;

@end
