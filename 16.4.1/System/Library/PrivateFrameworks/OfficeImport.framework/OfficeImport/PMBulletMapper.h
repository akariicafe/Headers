@class OADParagraphProperties, CMStyle;

@interface PMBulletMapper : CMMapper {
    OADParagraphProperties *mProperties;
    CMStyle *mStyle;
    int mFontSize;
}

+ (id)stringForIndex:(unsigned long long)a0 withFormat:(int)a1;

- (void).cxx_destruct;
- (id)bulletFontName;
- (int)bulletSize;
- (id)initWithOadProperties:(id)a0 fontSize:(int)a1 parent:(id)a2;
- (id)makeBulletWithListState:(id)a0;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapBulletColorWithState:(id)a0;

@end
