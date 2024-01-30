@class NSArray, NSObject;
@protocol OS_os_log;

@interface PGShareBackSuggester : NSObject {
    NSArray *_sources;
    unsigned short _positiveProcessingValue;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)shareBackSuggesterForCMMWithLoggingConnection:(id)a0 graph:(id)a1;
+ (id)shareBackSuggesterForSyndicationWithLoggingConnection:(id)a0 photoLibrary:(id)a1 graph:(id)a2;

- (void).cxx_destruct;
- (id)initWithSources:(id)a0 positiveProcessingValue:(unsigned short)a1 loggingConnection:(id)a2 graph:(id)a3;
- (id)suggesterResultsForInputs:(id)a0 inGraph:(id)a1 error:(id *)a2;
- (id)suggesterResultsForUnclusteredSuggesterInputs:(id)a0 inGraph:(id)a1 error:(id *)a2;

@end
