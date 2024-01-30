@class NSString, BKHIDEventDeliverySequence;
@protocol BKHIDEventSenderInfo;

@interface BKBufferedEventEntry : NSObject <BSInvalidatable> {
    id _rawEvent;
}

@property (retain, nonatomic) id<BKHIDEventSenderInfo> sender;
@property (retain, nonatomic) BKHIDEventDeliverySequence *sequence;
@property (retain, nonatomic) id additionalContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
