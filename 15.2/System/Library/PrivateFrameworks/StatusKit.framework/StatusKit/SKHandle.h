@class NSString;

@interface SKHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *handleString;

- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isExactlyEqualToHandle:(id)a0;
- (id)initWithString:(id)a0 mergeID:(id)a1;

@end
