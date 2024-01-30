@class NSSet, NSString, NSObject;
@protocol OS_os_log;

@interface PGChildActivityMemoryTitleGenerator : PGTitleGenerator {
    NSSet *_activityLabels;
    NSString *_childName;
    NSObject<OS_os_log> *_loggingConnection;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (BOOL)_shouldIncludeChildNameForActivityLabels:(id)a0;
- (id)initWithMomentNodes:(id)a0 activityLabels:(id)a1 childName:(id)a2 titleGenerationContext:(id)a3 loggingConnection:(id)a4;

@end
