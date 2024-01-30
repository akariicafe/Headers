@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *networkServiceTypePerConfig;
@property (nonatomic) long long expectedSendSize;
@property (nonatomic) long long expectedReceiveSize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
