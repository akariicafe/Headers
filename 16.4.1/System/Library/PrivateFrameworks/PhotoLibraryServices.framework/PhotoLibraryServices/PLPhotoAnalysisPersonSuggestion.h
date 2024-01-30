@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject

@property (readonly, nonatomic) long long keyFaceClusterSequenceNumber;
@property (readonly, copy, nonatomic) NSString *keyFaceLocalIdentifier;
@property (readonly, copy, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) long long personFaceCount;
@property (readonly, nonatomic) BOOL confirmed;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSuggestionDictionary:(id)a0;
- (id)suggestionDictionaryRepresentation;

@end
