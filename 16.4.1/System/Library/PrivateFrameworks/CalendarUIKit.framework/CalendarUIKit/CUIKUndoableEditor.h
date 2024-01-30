@class NSString, CUIKEditingManager;
@protocol CUIKDecisionDelegate, CUIKUndoDelegate, CUIKCommitDelegate;

@interface CUIKUndoableEditor : NSObject <CUIKEditor> {
    CUIKEditingManager *_editingManager;
}

@property (weak, nonatomic) id<CUIKDecisionDelegate> decisionDelegate;
@property (weak, nonatomic) id<CUIKUndoDelegate> undoDelegate;
@property (weak, nonatomic) id<CUIKCommitDelegate> commitDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteCalendars:(id)a0;
- (BOOL)deleteEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (void)saveChangesToEvents:(id)a0 impliedCommitDecision:(BOOL)a1;
- (BOOL)saveEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (void)saveNewSources:(id)a0 commit:(BOOL)a1;
- (BOOL)saveNewEvents:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (id)_openEditingContextForObjects:(id)a0;
- (BOOL)_saveChangesToEvents:(id)a0 span:(long long)a1 impliedCommitDecision:(BOOL)a2 error:(id *)a3;
- (void)deleteSources:(id)a0;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (void)deleteEvents:(id)a0;
- (void)saveCalendars:(id)a0;
- (void)saveChangesToSources:(id)a0;
- (void)saveChangesToEvents:(id)a0 span:(long long)a1;
- (void)deleteCalendar:(id)a0 forEntityType:(unsigned long long)a1;
- (void)deleteEvents:(id)a0 span:(long long)a1;
- (id)initWithEditingManager:(id)a0;
- (void).cxx_destruct;

@end
