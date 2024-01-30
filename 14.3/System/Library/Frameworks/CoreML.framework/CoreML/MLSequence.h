@class NSArray;

@interface MLSequence : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *featureValues;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *stringValues;
@property (readonly, nonatomic) NSArray *int64Values;

+ (id)emptySequenceWithType:(long long)a0;
+ (id)sequenceFromArray:(id)a0 error:(id *)a1;
+ (id)sequenceWithInt64Array:(id)a0;
+ (id)sequenceWithStringArray:(id)a0;

- (void).cxx_destruct;
- (id)initWithArray:(id)a0 type:(long long)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
