@class NSMutableArray, NSDate;

@interface EKInviteeTimeSpan : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSMutableArray *conflictedParticipants;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
