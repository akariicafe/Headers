@class VUIBookmarkKey, NSDate;

@interface VUIBookmark : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasFakeTimestamp;
@property (readonly, nonatomic) VUIBookmarkKey *key;
@property (readonly, nonatomic) double bookmarkTime;
@property (readonly, nonatomic) NSDate *bookmarkTimestamp;
@property (readonly, nonatomic) unsigned long long playCount;
@property (readonly, nonatomic) BOOL hasBeenPlayed;
@property (readonly, nonatomic) BOOL hasBeenRented;
@property (readonly, nonatomic) BOOL isMarkedAsUnwatched;

- (id)initWithKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithResultClass:(Class)a0;
- (void)_setBookmarkTimeWithoutUpdatingTimestamp:(double)a0;
- (void)_setBookmarkTimestamp:(id)a0;
- (void)_setPlayCount:(unsigned long long)a0;
- (void)_setHasBeenPlayed:(BOOL)a0;
- (void)_setHasBeenRented:(BOOL)a0;
- (void)_setIsMarkedAsUnwatched:(BOOL)a0;
- (BOOL)hasRemoteData;

@end
