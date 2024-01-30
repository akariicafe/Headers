@interface ARUIGridSpriteGenerator : NSObject {
    unsigned long long _spriteCount;
    unsigned long long _framesPerSprite;
    unsigned long long _columnsPerSprite;
    unsigned long long _rowsPerSprite;
}

+ (id)generatorWithSpriteCount:(unsigned long long)a0 framesPerSprite:(unsigned long long)a1 rowsPerSprite:(unsigned long long)a2 columnsPerSprite:(unsigned long long)a3;

- (void /* unknown type, empty encoding */)frameSize;
- (id)generateSprites;
- (id)initWithSpriteCount:(unsigned long long)a0 framesPerSprite:(unsigned long long)a1 rowsPerSprite:(unsigned long long)a2 columnsPerSprite:(unsigned long long)a3;
- (void /* unknown type, empty encoding */)originForSpriteAtIndex:(unsigned long long)a0;
- (id)spriteAtIndex:(unsigned long long)a0;

@end
