@class NSString, NSMutableArray;

@interface SSDownloadPolicy : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *downloadKind;
@property (readonly, nonatomic) long long URLBagType;
@property (copy, nonatomic) NSMutableArray *policyRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDownloadKind:(id)a0 URLBagType:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithNetworkConstraints:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)unionPolicyRule:(id)a0;
- (void)unionNetworkConstraints:(id)a0;
- (id)_policyRuleForSizeLimit:(long long)a0;
- (void)setPolicyRule:(id)a0;

@end
