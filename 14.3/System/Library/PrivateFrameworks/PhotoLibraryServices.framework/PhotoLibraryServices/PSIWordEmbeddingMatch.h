@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *word;
@property (readonly) NSString *extendedWord;
@property (readonly) double score;

- (void).cxx_destruct;
- (id)initWithWord:(id)a0 extendedWord:(id)a1 score:(double)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
