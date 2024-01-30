@class TSDStroke;

@interface TSCHSymbolPathCacheKey : NSObject <NSCopying> {
    int mSymbolType;
    double mSize;
    TSDStroke *mStroke;
    BOOL mForHitCheck;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSymbolType:(int)a0 symbolSize:(double)a1 stroke:(id)a2 forHitCheck:(BOOL)a3;

@end
