@class NSError, NSObject, NSArray, NSMutableDictionary, NSMutableSet, EKEventStore, NSMutableArray, NSMapTable, EKCalendar;
@protocol OS_dispatch_queue;

@interface EKICSImporter : NSObject

@property (nonatomic) BOOL asynchronous;
@property (nonatomic) unsigned long long numInvalidEvents;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) NSArray *importFilePaths;
@property (retain, nonatomic) EKCalendar *calendar;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSMutableDictionary *iCalFilesToImport;
@property (retain, nonatomic) NSMutableArray *vCalFilesToImport;
@property (retain, nonatomic) NSMapTable *calendarToICalFiles;
@property (retain, nonatomic) NSMapTable *calendarToITIPFiles;
@property (retain, nonatomic) NSMapTable *calendarToVCalFiles;
@property (retain, nonatomic) NSMutableSet *existingEventIDs;
@property (retain, nonatomic) NSMutableDictionary *iTIPFiles;
@property (retain, nonatomic) NSMutableDictionary *nonITIPFiles;
@property (retain, nonatomic) NSMutableArray *filesWithReminders;
@property (nonatomic) unsigned long long droppedReminderCount;
@property (retain, nonatomic) NSMutableArray *importedItems;
@property (copy, nonatomic) id /* block */ completionCallback;
@property (retain, nonatomic) NSError *importError;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *async_queue;
@property (copy, nonatomic) id /* block */ selectCalendar;
@property (copy, nonatomic) id /* block */ importFoundBackupFile;
@property (copy, nonatomic) id /* block */ importDroppedReminders;
@property (copy, nonatomic) id /* block */ makeDecision;
@property (copy, nonatomic) id /* block */ importSetProgressValue;
@property (copy, nonatomic) id /* block */ importSetProgressAsIndeterminate;

+ (id)allowedImportFileTypes;

- (id)callbackQueue;
- (void).cxx_destruct;
- (int)countReminders:(id)a0;
- (BOOL)importICalFiles;
- (void)_createImportHandle;
- (BOOL)_doITIPFileImport;
- (BOOL)_doImportFiles;
- (id)_existingEventFromICSEvent:(id)a0 calendar:(id)a1 exactMatch:(BOOL)a2;
- (id)_findBestEventFromEvents:(id)a0;
- (id)_findCalendarForExistingEvent:(id)a0;
- (id)_getImportedCalendarItems;
- (void)_importWithCompletion:(id /* block */)a0;
- (id)_initWithFilePaths:(id)a0 eventStore:(id)a1 calendar:(id)a2 options:(unsigned long long)a3;
- (BOOL)_isAnyAttendeeAddressFrom:(id)a0 organizer:(id)a1 equivalentTo:(id)a2;
- (id)_matchingAttendeeAddressesFrom:(id)a0 organizer:(id)a1 inSource:(id)a2;
- (BOOL)_message:(id)a0 hasNewSelfOrganizedEventForCalendar:(id)a1;
- (unsigned long long)_separateFilesForImport:(id)a0;
- (BOOL)_separateICalFilesForITIP;
- (BOOL)_sortFilesByImportCalendar;
- (void)asyncImportWithCompletion:(id /* block */)a0;
- (void)callCompletionWithSuccess:(BOOL)a0;
- (void)callImportDroppedRemindersCallbackIfThereWereReminders;
- (id)eventFromDocument:(id)a0;
- (void)importFoundBackupFile:(id)a0;
- (id)infoForNewCalendarForFiles:(id)a0 forITIPFiles:(id)a1 nonITIPFiles:(id)a2;
- (id)initWithFilePaths:(id)a0 calendar:(id)a1 options:(unsigned long long)a2;
- (id)initWithFilePaths:(id)a0 eventStore:(id)a1 options:(unsigned long long)a2;
- (id)selectCalendarWithTitle:(id)a0 color:(id)a1 description:(id)a2 error:(id *)a3;
- (void)setImportProgressAsIndeterminate;
- (BOOL)shouldImportContinueGivenDecision:(int)a0 eventsAffected:(unsigned long long)a1;
- (void)syncImportWithCompletion:(id /* block */)a0;

@end
