@class NSArray;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor

@property (copy, nonatomic) NSArray *articleIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
