@class NSSet;

@interface FCNewFavoriteFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <NSCopying>

@property (copy, nonatomic) NSSet *tagIDsReturned;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
