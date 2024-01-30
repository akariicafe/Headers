@class NSArray, NSURL, ECMessageFlagChange;

@interface EMUndoIndividualAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSArray *messageDatabaseIDs;
@property (retain, nonatomic) ECMessageFlagChange *flagChange;
@property (retain, nonatomic) NSURL *destinationMailboxURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
