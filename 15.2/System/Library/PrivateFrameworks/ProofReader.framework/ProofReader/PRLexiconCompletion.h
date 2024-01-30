@interface PRLexiconCompletion : NSObject

@property (readonly) unsigned int tokenID;
@property (readonly) double score;

- (id)description;
- (id)initWithTokenID:(unsigned int)a0 score:(double)a1;

@end
