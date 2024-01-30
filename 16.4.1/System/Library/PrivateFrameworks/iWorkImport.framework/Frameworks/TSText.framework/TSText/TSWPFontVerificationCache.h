@class NSMutableDictionary;

@interface TSWPFontVerificationCache : NSObject {
    NSMutableDictionary *_verifiedFonts;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)resetFontNames:(id)a0 withStatusInSet:(id)a1;
- (id)filterFontNames:(id)a0 withStatus:(long long)a1;
- (id)filterFontNames:(id)a0 withStatusInSet:(id)a1;
- (id)filterFontNames:(id)a0 withoutStatus:(long long)a1;
- (id)fontNamesWithStatus:(long long)a0;
- (id)fontNamesWithStatusInSet:(id)a0;
- (void)resetFontNames:(id)a0 withStatus:(long long)a1;
- (void)setStatus:(long long)a0 forFontName:(id)a1;
- (void)setStatus:(long long)a0 forFontNames:(id)a1;
- (long long)statusForFontName:(id)a0;

@end
