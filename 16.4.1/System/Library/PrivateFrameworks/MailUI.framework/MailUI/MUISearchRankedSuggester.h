@class NSString, NSArray, NSObject;
@protocol OS_os_log;

@interface MUISearchRankedSuggester : NSObject <EFLoggable, MUISearchSuggester> {
    NSString *_bundleID;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) BOOL shouldQueryForAsYouType;
@property (readonly, nonatomic) NSArray *categories;

+ (id)suggesterWithBundleID:(id)a0;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)generateSuggestionsUsingPhraseManager:(id)a0 handler:(id /* block */)a1;

@end
