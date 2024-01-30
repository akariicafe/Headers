@class NoteContext, NSMapTable;

@interface ESLocalDBWatcher : NSObject {
    void *_abWatcher;
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *_calWatcher;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedCalPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
}

@property (nonatomic) int lastSavedABSequenceNumber;
@property (nonatomic) int lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;

- (void)_handleCalChangeNotification;
- (void).cxx_destruct;
- (id)init;
- (void)_notesChangedExternally;
- (void)removeConcernedCalParty:(id)a0;
- (void)noteCalDBDirChanged;
- (void)removeConcernedNoteParty:(id)a0;
- (void)dealloc;
- (void)registerConcernedNoteParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)registerConcernedCalParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)didReceiveDarwinNotification:(id)a0;
- (void)_handleABChangeNotificationWithInfo:(id)a0;
- (void)registerConcernedABParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)removeConcernedABParty:(id)a0;
- (void)noteABDBDirChanged;

@end
