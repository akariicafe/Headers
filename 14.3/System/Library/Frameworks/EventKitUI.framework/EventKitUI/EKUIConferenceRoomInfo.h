@class NSArray, EKRequestAvailabilityOperation;

@interface EKUIConferenceRoomInfo : NSObject

@property (retain) EKRequestAvailabilityOperation *availabilityRequest;
@property (retain) NSArray *availabilitySpans;
@property long long availabilityType;

- (id)init;
- (void).cxx_destruct;

@end
