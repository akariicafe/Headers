@class NSString;

@interface PGSyndicatedAssetsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
}

- (unsigned short)entityType;
- (unsigned short)state;
- (id)entityIdentifier;
- (void).cxx_destruct;
- (unsigned short)type;
- (unsigned short)displayType;
- (BOOL)isEquivalentToQuestion:(id)a0;
- (id)initWithAssetSyndicationIdentifier:(id)a0;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;

@end
