@class NSSet;

@interface EKiMIPInvitation : EKiMIPUpdate {
    NSSet *_attendees;
}

+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (id)emailSubject;
- (id)attendees;
- (void).cxx_destruct;
- (id)emailBody;
- (id)initWithEvent:(id)a0 withDiff:(id)a1;

@end
