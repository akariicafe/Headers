@class NSString, NSArray, NSDictionary, NSMutableDictionary, CSLPRFObservationHelper;
@protocol CSLPRFApplicationLibrary;

@interface CSLPRFCompositeApplicationLibrary : NSObject <CSLPRFApplicationLibraryObserving, CSLPRFApplicationLibrary> {
    id<CSLPRFApplicationLibrary> _primaryLibrary;
    id<CSLPRFApplicationLibrary> _secondaryLibrary;
    CSLPRFObservationHelper *_observationHelper;
    NSMutableDictionary *_lock_applications;
    NSMutableDictionary *_lock_primaryApplications;
    NSMutableDictionary *_lock_primaryApplicationsByCounterpart;
    NSMutableDictionary *_lock_secondaryApplications;
    NSMutableDictionary *_lock_secondaryApplicationsByCounterpart;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_observing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *allApplications;
@property (readonly, nonatomic) NSDictionary *allApplicationsDictionary;

- (id)applicationWithBundleIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)allApplicationsWithCompletion:(id /* block */)a0;
- (void)applicationLibrary:(id)a0 didAddApplications:(id)a1;
- (void)applicationLibrary:(id)a0 didRemoveApplications:(id)a1;
- (void)applicationLibrary:(id)a0 didUpdateApplications:(id)a1;
- (void)applicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithPrimaryLibrary:(id)a0 secondaryLibrary:(id)a1;

@end
