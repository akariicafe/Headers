@interface ASAction : DAAction

@property (nonatomic) BOOL isSkippedDetachment;

- (id)event;
- (id)contact;
- (id)toDo;
- (BOOL)isOrganizerUpdate;
- (id)deletedEventID;
- (id)deletedContactID;
- (id)deletedToDoID;

@end
