@class NSString;

@interface PGSharedLibraryAssetsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
}

- (unsigned short)entityType;
- (unsigned short)state;
- (unsigned short)type;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
