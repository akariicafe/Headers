@class NSString;

@interface NFLBatchContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long batchType;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initForTesting;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBatchType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
