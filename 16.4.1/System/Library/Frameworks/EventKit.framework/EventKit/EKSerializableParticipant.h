@class NSString, NSURL;

@interface EKSerializableParticipant : EKSerializableObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;

+ (id)classesForKey;

- (id)initWithParticipant:(id)a0;
- (void).cxx_destruct;
- (id)createAttendee:(id *)a0;

@end
