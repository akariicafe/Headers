@class NSString;
@protocol CNRegulatoryLogger, CNImageUtilitiesLogger, CNFavoritesLogger, CNSpotlightIndexingLogger, CNAPITriageLogger, CNContactsLogger, CNGeminiLogger, CNContactsLoggerProvider;

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider> {
    id<CNContactsLogger> _contactsLogger;
    id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
    id<CNRegulatoryLogger> _regulatoryLogger;
    id<CNFavoritesLogger> _favoritesLogger;
    id<CNGeminiLogger> _geminiLogger;
    id<CNAPITriageLogger> _apiTriageLogger;
    id<CNImageUtilitiesLogger> _imageUtilitiesLogger;
}

@property (class, readonly) id<CNContactsLoggerProvider> defaultProvider;

@property (readonly, nonatomic) id<CNContactsLogger> contactsLogger;
@property (readonly, nonatomic) id<CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property (readonly, nonatomic) id<CNRegulatoryLogger> regulatoryLogger;
@property (readonly, nonatomic) id<CNFavoritesLogger> favoritesLogger;
@property (readonly, nonatomic) id<CNGeminiLogger> geminiLogger;
@property (readonly, nonatomic) id<CNAPITriageLogger> apiTriageLogger;
@property (readonly, nonatomic) id<CNImageUtilitiesLogger> imageUtilitiesLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
