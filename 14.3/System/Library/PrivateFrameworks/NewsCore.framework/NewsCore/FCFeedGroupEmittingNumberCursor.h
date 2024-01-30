@class NSNumber;

@interface FCFeedGroupEmittingNumberCursor : FCFeedGroupEmittingCursor

@property (readonly, nonatomic) NSNumber *number;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithNumber:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
