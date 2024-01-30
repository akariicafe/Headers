@class NSString, NSData, NSNumber;

@interface OSLogMessageComponent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *formatSubstring;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSData *argumentDataValue;
@property (copy, nonatomic) NSNumber *argumentNumberValue;
@property (copy, nonatomic) NSString *argumentStringValue;
@property (readonly, nonatomic) long long argumentCategory;
@property (readonly, nonatomic) double argumentDoubleValue;
@property (readonly, nonatomic) long long argumentInt64Value;
@property (readonly, nonatomic) unsigned long long argumentUInt64Value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)fillWithScalar:(id)a0;
- (void)fillWithString:(id)a0;
- (void)fillWithData:(id)a0;
- (id)initWithDecomposedMessage:(id)a0 atIndex:(unsigned long long)a1;

@end
