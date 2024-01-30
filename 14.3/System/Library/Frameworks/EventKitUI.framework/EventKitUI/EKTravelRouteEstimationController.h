@class NSDictionary, EKEventStore, NSDate, EKStructuredLocation, NSMutableArray;
@protocol EKTravelRouteEstimationControllerDelegate, EKStyleProvider;

@interface EKTravelRouteEstimationController : NSObject {
    EKEventStore *_eventStore;
    id<EKStyleProvider> _styleProvider;
    EKStructuredLocation *_originStructuredLocation;
    NSMutableArray *_rows;
}

@property (retain) EKStructuredLocation *evaluatedOriginLocation;
@property (retain) NSDictionary *travelTimeEstimatedValues;
@property (retain) NSDictionary *travelTimeLookupErrors;
@property BOOL isEstimating;
@property (weak, nonatomic) id<EKTravelRouteEstimationControllerDelegate> delegate;
@property (retain) NSDate *arrivalDate;
@property (retain, nonatomic) EKStructuredLocation *originStructuredLocation;
@property (retain) EKStructuredLocation *destinationStructuredLocation;
@property (readonly, nonatomic) unsigned long long numberOfOutputRows;

+ (id)_basedOnLocationLocalizedString;

- (id)_routingModeTypesAsEnum;
- (double)_estimatedTravelTimeValueAtRowIndex:(unsigned long long)a0;
- (long long)_estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)a0;
- (id)_estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)a0;
- (BOOL)_estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)a0;
- (id)_imageForCellAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithDestinationStructuredLocation:(id)a0 styleProvider:(id)a1 eventStore:(id)a2;
- (void)beginOriginLocationEstimationLookup;
- (void)beginTravelTimeEstimationLookup;
- (double)estimatedTravelTimeValueAtRowIndex:(unsigned long long)a0;
- (id)estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)a0;
- (BOOL)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)a0;
- (long long)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)a0;
- (id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)_beginOriginLocationEstimationEventKitLookup;
- (void)_originLocationEstimationCompletedCoreRoutineLookup;
- (void)_originLocationEstimationCompletedEventKitLookup;
- (void)_beginOriginLocationEstimationCoreRoutineLookup;
- (void)_lookupTimedOut;

@end
