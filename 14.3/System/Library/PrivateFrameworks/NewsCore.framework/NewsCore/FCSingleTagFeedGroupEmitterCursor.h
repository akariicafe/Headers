@class FCFeedRange;

@interface FCSingleTagFeedGroupEmitterCursor : FCFeedGroupEmittingCursor <NSCopying>

@property (copy, nonatomic) FCFeedRange *freeFeedRange;
@property (copy, nonatomic) FCFeedRange *paidFeedRange;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
