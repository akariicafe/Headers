@class NSString, NSDictionary;

@interface PGCameraLibrarySwitchQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    NSDictionary *_additionalInfo;
}

- (unsigned short)entityType;
- (unsigned short)state;
- (unsigned short)type;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0 libraryScopeUUID:(id)a1 previousSwitchState:(id)a2 currentSwitchState:(id)a3;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
