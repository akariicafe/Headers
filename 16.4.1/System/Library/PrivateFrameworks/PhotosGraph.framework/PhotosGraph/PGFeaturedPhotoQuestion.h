@class NSDictionary, NSString;

@interface PGFeaturedPhotoQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
}

- (unsigned short)entityType;
- (unsigned short)state;
- (unsigned short)type;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0 suggestionType:(unsigned short)a1 suggestionSubtype:(unsigned short)a2;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
