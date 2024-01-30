@class NSObject;
@protocol OS_os_log;

@interface PGShareBackSource : NSObject <PGShareBackSourceProtocol>

@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0;
- (id)prepareAndReturnSuggesterResultsForInputs:(id)a0 inGraph:(id)a1 error:(id *)a2;
- (BOOL)prepareSourceWithGraph:(id)a0;
- (id)suggesterResultsForInputs:(id)a0 momentNodes:(id)a1 inGraph:(id)a2 error:(id *)a3;

@end
