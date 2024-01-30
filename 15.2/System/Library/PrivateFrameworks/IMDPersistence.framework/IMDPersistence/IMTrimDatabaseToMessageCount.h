@interface IMTrimDatabaseToMessageCount : IMAbstractDatabaseTrimmer

@property (readonly, nonatomic) long long messageCount;

- (id)initWithSourceDatabasePath:(id)a0 destinationDatabasePath:(id)a1 messageCount:(long long)a2;
- (void)performMessageSelectionWithOperation:(struct IMDSqlOperation { void *x0; void *x1; struct __CFString *x2; void *x3; struct IMDSqlStatement { void *x0; int x1; struct __CFString *x2; struct sqlite3 *x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x0; char *x1; char *x2; char *x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString *x3; double x4; double x5; double x6; } x7; } x4; struct __CFError *x5; } *)a0;

@end
