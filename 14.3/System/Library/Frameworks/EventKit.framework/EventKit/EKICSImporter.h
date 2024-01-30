@class NSError, NSObject, NSArray, NSMutableDictionary, NSMutableSet, EKEventStore, NSMutableArray, NSMapTable, EKCalendar;
@protocol OS_dispatch_queue;

@interface EKICSImporter : NSObject

@property (nonatomic) BOOL asynchronous;
@property (nonatomic) unsigned long long numInvalidEvents;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) NSArray *importFilePaths;
@property (retain, nonatomic) EKCalendar *calendar;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSArray *allCalendarUIDs;
@property (retain, nonatomic) NSArray *allSourceUIDs;
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
@property (copy, nonatomic) id /* block */ shouldImportContinueGivenDecision;
@property (copy, nonatomic) id /* block */ importSetProgressValue;
@property (copy, nonatomic) id /* block */ importSetProgressAsIndeterminate;

+ (id)allowedImportFileTypes;

- (void).cxx_destruct;
- (void)_importWithCompletion:(id /* block */)a0;
- (void)setImportProgressAsIndeterminate;
- (id)_initWithFilePaths:(id)a0 orderedCalendarUIDs:(id)a1 orderedSourceUIDs:(id)a2 eventStore:(id)a3 calendar:(id)a4 options:(unsigned long long)a5;
- (void)_createImportHandle;
- (unsigned long long)_separateFilesForImport:(id)a0;
- (void)callCompletionWithSuccess:(BOOL)a0;
- (BOOL)importICalFiles;
- (BOOL)_separateICalFilesForITIP;
- (BOOL)_sortFilesByImportCalendar;
- (BOOL)_doImportFiles;
- (void)callImportDroppedRemindersCallbackIfThereWereReminders;
- (id)_findCalendarForExistingEvent:(id)a0;
- (id)_findPreferredSourceForDocument:(id)a0;
- (id)_defaultImportCalendarRequiringSource:(id)a0;
- (id)infoForNewCalendarForFiles:(id)a0 forITIPFiles:(id)a1 nonITIPFiles:(id)a2;
- (id)selectCalendarWithTitle:(id)a0 color:(id)a1 description:(id)a2 error:(id *)a3;
- (void)importFoundBackupFile:(id)a0;
- (int)countReminders:(id)a0;
- (BOOL)shouldImportContinueGivenDecision:(int)a0 eventsAffected:(unsigned long long)a1;
- (id)eventFromDocument:(id)a0;
- (BOOL)_isAnyAttendeeAddressFrom:(id)a0 organizer:(id)a1 equivalentTo:(id)a2;
- (id)_matchingAttendeeAddressesFrom:(id)a0 organizer:(id)a1 inSource:(id)a2;
- (BOOL)_organizer:(id)a0 matchesDomainForURL:(id)a1;
- (id)_getImportedCalendarItems;
- (id)initWithFilePaths:(id)a0 orderedCalendarUIDs:(id)a1 orderedSourceUIDs:(id)a2 eventStore:(id)a3 options:(unsigned long long)a4;
- (id)initWithFilePaths:(id)a0 calendar:(id)a1 options:(unsigned long long)a2;
- (void)asyncImportWithCompletion:(id /* block */)a0;
- (void)syncImportWithCompletion:(id /* block */)a0;
- (id)callbackQueue;

@end
