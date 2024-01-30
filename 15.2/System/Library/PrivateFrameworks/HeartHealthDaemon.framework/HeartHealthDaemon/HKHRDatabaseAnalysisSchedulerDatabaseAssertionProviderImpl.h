@class NSString, HDProfile;

@interface HKHRDatabaseAnalysisSchedulerDatabaseAssertionProviderImpl : NSObject <HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider> {
    HDProfile *_profile;
    NSString *_identifier;
}

- (void).cxx_destruct;
- (id)takeAssertionWithError:(id *)a0;
- (id)initWithProfile:(id)a0 identifier:(id)a1;

@end
