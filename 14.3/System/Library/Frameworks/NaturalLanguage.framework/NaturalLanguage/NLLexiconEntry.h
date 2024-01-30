@class NSString;

@interface NLLexiconEntry : NSObject {
    NSString *_string;
    unsigned int _tokenID;
    unsigned long long _flags;
    double _probability;
}

@property (readonly, copy) NSString *string;
@property (readonly) unsigned long long flags;
@property (readonly) double probability;

+ (id)entryWithString:(id)a0 tokenID:(unsigned int)a1 flags:(unsigned long long)a2 probability:(double)a3;

- (void).cxx_destruct;
- (unsigned int)tokenID;
- (id)initWithString:(id)a0 tokenID:(unsigned int)a1 flags:(unsigned long long)a2 probability:(double)a3;

@end
