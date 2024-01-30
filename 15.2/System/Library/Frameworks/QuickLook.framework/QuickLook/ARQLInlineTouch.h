@class NSString;

@interface ARQLInlineTouch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint { double x; double y; } cgLocation;
@property (nonatomic) struct CGPoint { double x; double y; } cgPreviousLocation;
@property (nonatomic) long long phase;
@property (retain, nonatomic) NSString *uid;

+ (id)touchToUUIDMapping;
+ (void)removeUIDForUITouch:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)uuidForTouch:(id)a0;
- (id)initWithUITouch:(id)a0;

@end
