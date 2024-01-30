@interface PersistenceHelper : NSObject

- (id)fetchFreezeInfo:(id)a0;
- (id)encodeMovieData:(id)a0 isPHMemory:(BOOL)a1;
- (void)performChangesWith:(id)a0 pickedAssets:(id)a1 memory:(id)a2 movieData:(id)a3 keyAsset:(id)a4 title:(id)a5 subtitle:(id)a6 freezeRanges:(id)a7;
- (id)readMovieDataWith:(id)a0;

@end
