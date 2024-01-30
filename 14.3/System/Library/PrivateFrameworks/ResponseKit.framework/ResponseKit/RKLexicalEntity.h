@class NSString;

@interface RKLexicalEntity : NSObject

@property (retain) NSString *internalWord;
@property (retain) NSString *string;
@property (retain) NSString *tokenType;
@property (retain) NSString *partOfSpeech;
@property (retain) NSString *lemma;
@property (retain) NSString *language;
@property struct _NSRange { unsigned long long location; unsigned long long length; } tokenRange;
@property (readonly) NSString *word;

- (void).cxx_destruct;
- (id)description;

@end
