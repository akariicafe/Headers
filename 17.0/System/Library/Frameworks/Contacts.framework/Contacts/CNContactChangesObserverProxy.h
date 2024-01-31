@class NSArray, CNContact;
@protocol CNContactChangesObserver;

@interface CNContactChangesObserverProxy : NSObject {
    BOOL _unify;
    id<CNContactChangesObserver> _observer;
    NSArray *_keysToFetch;
    CNContact *_contactSnapshot;
}

- (void).cxx_destruct;

@end
