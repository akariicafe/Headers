@class NSDate;

@interface FCFeedCursor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long order;
@property (readonly, nonatomic) BOOL isTopOfFeed;
@property (readonly, nonatomic) BOOL isBottomOfFeed;
@property (readonly, copy, nonatomic) NSDate *date;

+ (id)cursorForOrder:(unsigned long long)a0;
+ (id)cursorForDate:(id)a0;
+ (id)cursorForCurrentDate;
+ (id)cursorForBottomOfFeed;
+ (id)cursorForTopOfFeed;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compareToCursor:(id)a0;
- (BOOL)isEqualToCursor:(id)a0;
- (BOOL)hasReachedCursor:(id)a0;
- (id)topmostCursor:(id)a0;
- (id)bottommostCursor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
