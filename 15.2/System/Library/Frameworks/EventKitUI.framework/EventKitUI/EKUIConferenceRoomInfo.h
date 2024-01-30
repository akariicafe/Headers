@class NSArray, EKRequestAvailabilityOperation;

@interface EKUIConferenceRoomInfo : NSObject

@property (retain, nonatomic) EKRequestAvailabilityOperation *availabilityRequest;
@property (retain, nonatomic) NSArray *availabilitySpans;
@property long long availabilityType;

- (void).cxx_destruct;
- (id)init;

@end
