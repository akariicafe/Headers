@class NSString, ICASCollaborationStatus, NSNumber, ICASCollaborationType;

@interface ICASNoteAccessData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *isPasswordProtected;
@property (readonly, nonatomic) NSNumber *isPinned;
@property (readonly, nonatomic) ICASCollaborationStatus *collaborationStatus;
@property (readonly, nonatomic) ICASCollaborationType *collaborationType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithIsPasswordProtected:(id)a0 isPinned:(id)a1 collaborationStatus:(id)a2 collaborationType:(id)a3;

@end
