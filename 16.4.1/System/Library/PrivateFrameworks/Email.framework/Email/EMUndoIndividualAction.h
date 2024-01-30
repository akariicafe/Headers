@class NSArray, EMFollowUp, NSURL, ECMessageFlagChange, NSDate;

@interface EMUndoIndividualAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSArray *messageDatabaseIDs;
@property (retain, nonatomic) ECMessageFlagChange *flagChange;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (retain, nonatomic) NSDate *readLaterDate;
@property (retain, nonatomic) EMFollowUp *followUp;
@property (nonatomic) BOOL blockSender;
@property (nonatomic) long long conversationID;
@property (nonatomic) long long conversationNotificationLevel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
