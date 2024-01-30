@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *networkServiceTypePerConfig;
@property (nonatomic) long long expectedSendSize;
@property (nonatomic) long long expectedReceiveSize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
