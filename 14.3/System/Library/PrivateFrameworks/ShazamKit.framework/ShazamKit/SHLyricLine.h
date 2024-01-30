@class NSString;

@interface SHLyricLine : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double offset;

+ (id)lyricLineWithText:(id)a0 offset:(double)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLineWithText:(id)a0 offset:(double)a1;

@end
