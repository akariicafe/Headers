@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject {
    NSMutableArray *_tokens;
}

- (void).cxx_destruct;
- (id)token:(unsigned int)a0;
- (id)initWithText:(id)a0;
- (unsigned long long)tokenCount;
- (id)initWithText:(id)a0 levelDescriptions:(id)a1 language:(int)a2;
- (id)listLevelTextForOutline:(id)a0;

@end
