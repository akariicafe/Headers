@class CNContactStore, PPNotificationHandler, EKEventStore;
@protocol SGSuggestionsServiceContactsProtocol, NSObject;

@interface PPNotificationManagerGuardedData : NSObject {
    PPNotificationHandler *_contactsHandler;
    id<NSObject> _contactsToken;
    CNContactStore *_cnStore;
    PPNotificationHandler *_meCardHandler;
    id<NSObject> _meCardToken;
    id<NSObject> _meCardDonationToken;
    PPNotificationHandler *_portraitChangeHandler;
    int _portraitChangeToken;
    PPNotificationHandler *_portraitInvalidationHandler;
    int _portraitInvalidationToken;
    PPNotificationHandler *_eventKitHandler;
    id<NSObject> _eventKitToken;
    EKEventStore *_ekStore;
    long long _eventKitChangeTrackingToken;
    id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
    PPNotificationHandler *_suggestionsHandler;
    id _suggestionsToken;
}

- (void).cxx_destruct;
- (id)description;

@end
