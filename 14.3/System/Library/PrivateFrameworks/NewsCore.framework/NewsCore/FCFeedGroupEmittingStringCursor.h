@class NSString;

@interface FCFeedGroupEmittingStringCursor : FCFeedGroupEmittingCursor

@property (readonly, nonatomic) NSString *string;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
