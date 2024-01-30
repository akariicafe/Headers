@class NSString;

@interface CALNNullRemoteMutator : NSObject <CALNRemoteMutator>

@property (class, readonly, nonatomic) CALNNullRemoteMutator *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSnoozeTimeInterval:(double)a0 alarm:(id)a1 calendarItem:(id)a2;
- (BOOL)deleteEvent:(id)a0 withSpan:(long long)a1;
- (void)setParticipantStatus:(long long)a0 span:(long long)a1 event:(id)a2;

@end
