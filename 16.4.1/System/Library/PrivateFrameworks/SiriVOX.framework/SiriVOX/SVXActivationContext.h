@class AFRequestInfo, SVXSystemEvent, NSDictionary, SVXClientInfo, SVXButtonEvent;

@interface SVXActivationContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) SVXButtonEvent *buttonEvent;
@property (readonly, copy, nonatomic) SVXSystemEvent *systemEvent;
@property (readonly, copy, nonatomic) SVXClientInfo *clientInfo;
@property (readonly, copy, nonatomic) AFRequestInfo *requestInfo;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSource:(long long)a0 timestamp:(unsigned long long)a1 buttonEvent:(id)a2 systemEvent:(id)a3 clientInfo:(id)a4 requestInfo:(id)a5 userInfo:(id)a6;

@end
