@class NSString;

@interface ARQLInlineTouch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint { double x; double y; } cgLocation;
@property (nonatomic) struct CGPoint { double x; double y; } cgPreviousLocation;
@property (nonatomic) long long phase;
@property (copy, nonatomic) NSString *uid;

+ (void)removeUIDForUITouch:(id)a0;
+ (id)touchToUUIDMapping;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUITouch:(id)a0;
- (id)uuidForTouch:(id)a0;

@end
