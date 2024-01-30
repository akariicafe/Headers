@class NSArray, NSString, CABackdropLayer, UIView;

@interface CKSendAnimationContext : NSObject <CKSendAnimationContext>

@property (copy, nonatomic) NSArray *animatableViews;
@property (copy, nonatomic) NSArray *animatableTextViews;
@property (copy, nonatomic) NSArray *throwBalloonViews;
@property (copy, nonatomic) NSArray *framesOfAddedChatItems;
@property (copy, nonatomic) NSArray *throwBalloonViewAttributesCollection;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSString *impactIdentifier;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) BOOL isSender;
@property (nonatomic) BOOL beginAnimationFromTranscriptPresentedState;
@property (retain, nonatomic) NSArray *messages;
@property (retain, nonatomic) CABackdropLayer *backdropLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
