@class NSDate;

@interface FCFeedGroupEmittingDateCursor : FCFeedGroupEmittingCursor

@property (readonly, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
