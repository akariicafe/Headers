@interface VUIMutableBookmark : VUIBookmark

+ (BOOL)supportsSecureCoding;

- (void)setPlayCount:(unsigned long long)a0;
- (void)setBookmarkTime:(double)a0;
- (void)setBookmarkTimestamp:(id)a0;
- (void)setHasBeenPlayed:(BOOL)a0;
- (void)setHasBeenRented:(BOOL)a0;
- (void)setIsMarkedAsUnwatched:(BOOL)a0;

@end
