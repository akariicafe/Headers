@interface ASAction : DAAction

@property (nonatomic) BOOL isSkippedDetachment;

- (id)contact;
- (id)event;
- (id)deletedContactID;
- (id)deletedEventID;
- (id)deletedToDoID;
- (BOOL)isOrganizerUpdate;
- (id)toDo;

@end
