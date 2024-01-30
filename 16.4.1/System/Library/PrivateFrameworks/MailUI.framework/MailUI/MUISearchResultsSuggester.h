@class NSArray, NSString, EMMessageRepository, NSObject, MUISearchSenderQueryManager;
@protocol OS_os_log, MUISearchResultsSuggesterConfiguration;

@interface MUISearchResultsSuggester : NSObject <EFLoggable, MUISearchSuggester> {
    NSString *_bundleID;
    EMMessageRepository *_messageRepository;
    MUISearchSenderQueryManager *_senderQueryManager;
    id<MUISearchResultsSuggesterConfiguration> _configuration;
}

@property (class, readonly, nonatomic) NSArray *dateAttributes;
@property (class, readonly, nonatomic) NSString *dateQueryString;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) BOOL shouldQueryForAsYouType;
@property (readonly, nonatomic) NSArray *categories;

+ (id)dateForSuggestionResult:(id)a0;
+ (id)documentsSuggesterWithBundleID:(id)a0 messageRepository:(id)a1 senderQueryManager:(id)a2;
+ (id)linksSuggesterWithBundleID:(id)a0 messageRepository:(id)a1 senderQueryManager:(id)a2;
+ (id)suggestionResultsSortedByDate:(id)a0;

- (void).cxx_destruct;
- (id)generateSuggestionsUsingPhraseManager:(id)a0 handler:(id /* block */)a1;
- (id)initWithBundleID:(id)a0 messageRepository:(id)a1 senderQueryManager:(id)a2 configuration:(id)a3;

@end
