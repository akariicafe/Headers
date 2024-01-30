@interface EKParticipantChange : EKObjectChange

+ (int)entityType;
+ (void)fetchParticipantChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchParticipantChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchParticipantChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

@end
