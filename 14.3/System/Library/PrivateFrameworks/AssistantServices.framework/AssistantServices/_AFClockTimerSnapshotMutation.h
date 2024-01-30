@class NSString, NSDictionary, NSOrderedSet, NSDate, AFClockTimerSnapshot;

@interface _AFClockTimerSnapshotMutation : NSObject <AFClockTimerSnapshotMutating> {
    AFClockTimerSnapshot *_baseModel;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_timersByID;
    NSOrderedSet *_notifiedFiringTimerIDs;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasGeneration : 1; unsigned char hasDate : 1; unsigned char hasTimersByID : 1; unsigned char hasNotifiedFiringTimerIDs : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGeneration:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setTimersByID:(id)a0;
- (void)setNotifiedFiringTimerIDs:(id)a0;
- (void)setDate:(id)a0;
- (id)initWithBaseModel:(id)a0;

@end
