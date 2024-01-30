@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject

@property (readonly, nonatomic) long long keyFaceClusterSequenceNumber;
@property (readonly, copy, nonatomic) NSString *keyFaceLocalIdentifier;
@property (readonly, copy, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) long long personFaceCount;
@property (readonly, nonatomic) BOOL confirmed;

- (id)initWithSuggestionDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)suggestionDictionaryRepresentation;

@end
