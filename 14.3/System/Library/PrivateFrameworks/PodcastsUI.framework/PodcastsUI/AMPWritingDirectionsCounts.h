@class NSString;

@interface AMPWritingDirectionsCounts : NSObject

@property (class, nonatomic, readonly) AMPWritingDirectionsCounts *zero;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ natural;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ leftToRight;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ rightToLeft;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ total;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ significantValues;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasStronglyTypedCounts;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isRTLEnough;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isRTLMinimal;
@property (nonatomic, readonly) NSString *description;

+ (id)add:(id)a0 to:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNatural:(unsigned long long)a0 leftToRight:(unsigned long long)a1 rightToLeft:(unsigned long long)a2;

@end
