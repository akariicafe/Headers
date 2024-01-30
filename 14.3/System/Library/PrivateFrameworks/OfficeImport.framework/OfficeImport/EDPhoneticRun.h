@interface EDPhoneticRun : NSObject {
    unsigned int mCharIndex;
    unsigned int mBaseCharIndex;
    unsigned int mBaseCharCount;
}

- (id)init;
- (unsigned int)charIndex;
- (void)setCharIndex:(unsigned int)a0;
- (id)description;
- (void)adjustIndex:(unsigned long long)a0;
- (unsigned int)charBaseIndex;
- (void)setCharBaseIndex:(unsigned int)a0;
- (unsigned int)charBaseCount;
- (void)setCharBaseCount:(unsigned int)a0;

@end
