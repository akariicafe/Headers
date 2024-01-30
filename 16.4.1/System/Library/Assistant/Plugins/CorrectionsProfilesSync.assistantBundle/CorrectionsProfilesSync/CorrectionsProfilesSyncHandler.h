@class NSString, NSDictionary, CorrectionsProfilesLastState, NSMutableArray;

@interface CorrectionsProfilesSyncHandler : NSObject <AFSyncHandler> {
    NSDictionary *_correctionProfiles;
    NSMutableArray *_correctionProfileKeysToSync;
    NSMutableArray *_correctionProfileKeysToDelete;
    CorrectionsProfilesLastState *_lastState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 count:(long long)a2 forKey:(id)a3 beginInfo:(id)a4;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (void)_loadCorrectionProfiles;

@end
