@class NSArray, NSDate;

@interface EKInviteeAlternativeTime : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *conflictedParticipants;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 conflictedParticipants:(id)a2;
- (id)description;

@end
