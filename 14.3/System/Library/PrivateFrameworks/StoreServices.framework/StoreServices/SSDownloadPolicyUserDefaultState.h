@class NSString, NSNumber;

@interface SSDownloadPolicyUserDefaultState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSNumber *fallbackNumberValue;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL shouldInvertBoolValue;
@property (readonly, nonatomic) BOOL currentBoolValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
