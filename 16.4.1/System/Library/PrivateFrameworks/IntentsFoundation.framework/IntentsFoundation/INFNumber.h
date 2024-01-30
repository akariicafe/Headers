@class NSNumber, NSString;

@interface INFNumber : INFSentenceToken {
    NSString *_identifier;
}

@property (copy, nonatomic) NSNumber *value;

+ (id)numberWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)identifier;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)contributingSentenceContext;
- (id)stringForContext:(id)a0;

@end
