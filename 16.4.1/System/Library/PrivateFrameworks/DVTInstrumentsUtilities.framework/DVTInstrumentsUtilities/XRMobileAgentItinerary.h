@class NSString;
@protocol XRMobileAgentStop;

@interface XRMobileAgentItinerary : NSObject {
    id<XRMobileAgentStop> _nextStop;
    id<XRMobileAgentStop> _nextStopTicket;
    NSString *_nextMode;
    int _nextMovementType;
    unsigned int _nextQoS;
}

@property (readonly, nonatomic) BOOL updated;
@property (retain, nonatomic) id<XRMobileAgentStop> finalDestination;
@property (retain, nonatomic) id finalDestinationTicket;
@property (readonly, nonatomic) id<XRMobileAgentStop> currentStop;

+ (id)inlineStop;

- (void).cxx_destruct;
- (void)revisit;
- (void)setNextStop:(id)a0 mode:(id)a1;
- (void)setNextStop:(id)a0 mode:(id)a1 ticket:(id)a2;
- (void)_visitNextStop:(id)a0;
- (int)_nextMovementType;
- (void)finishedWithMode:(id)a0;
- (void)setNextStop:(id)a0 mode:(id)a1 ticket:(id)a2 desiredQoS:(unsigned int)a3;

@end
