@class NSDictionary, NSString;

@interface PGFeaturedPhotoQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
}

- (id)additionalInfo;
- (unsigned short)entityType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (unsigned short)type;
- (unsigned short)state;
- (id)initWithAssetUUID:(id)a0 suggestionType:(unsigned short)a1 suggestionSubtype:(unsigned short)a2;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
