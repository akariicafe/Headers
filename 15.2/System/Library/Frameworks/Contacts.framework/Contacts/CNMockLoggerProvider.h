@class NSString;
@protocol CNFavoritesLogger, CNRegulatoryLogger, CNAPITriageLogger, CNSpotlightIndexingLogger, CNImageUtilitiesLogger, CNGeminiLogger, CNContactsLogger;

@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider>

@property (retain, nonatomic) id<CNContactsLogger> contactsLogger;
@property (retain, nonatomic) id<CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property (retain, nonatomic) id<CNRegulatoryLogger> regulatoryLogger;
@property (retain, nonatomic) id<CNFavoritesLogger> favoritesLogger;
@property (retain, nonatomic) id<CNGeminiLogger> geminiLogger;
@property (retain, nonatomic) id<CNAPITriageLogger> apiTriageLogger;
@property (retain, nonatomic) id<CNImageUtilitiesLogger> imageUtilitiesLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loggerProvider;

- (void).cxx_destruct;

@end
