@class NSString;

@interface TIStatisticChange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int value;
@property (readonly, nonatomic) NSString *inputMode;

+ (BOOL)_isSpringBoard;
+ (id)statisticChangeWithName:(id)a0 andValue:(int)a1 andInputMode:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 andValue:(int)a1 andInputMode:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
