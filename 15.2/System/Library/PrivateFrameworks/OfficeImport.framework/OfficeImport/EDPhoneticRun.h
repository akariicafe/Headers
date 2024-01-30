@interface EDPhoneticRun : NSObject {
    unsigned int mCharIndex;
    unsigned int mBaseCharIndex;
    unsigned int mBaseCharCount;
}

- (id)description;
- (void)setCharIndex:(unsigned int)a0;
- (unsigned int)charIndex;
- (id)init;
- (void)adjustIndex:(unsigned long long)a0;
- (unsigned int)charBaseIndex;
- (void)setCharBaseIndex:(unsigned int)a0;
- (unsigned int)charBaseCount;
- (void)setCharBaseCount:(unsigned int)a0;

@end
