@class ICNote, NSString;

@interface ICNoteParticipant : NSManagedObject

@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSString *userID;

@end
