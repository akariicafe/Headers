@class NSDictionary, LNSystemProtocol, LNAction;

@interface LNSuggestedAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNAction *action;
@property (readonly, nonatomic) LNSystemProtocol *systemProtocol;
@property (readonly, copy, nonatomic) NSDictionary *dialogParameters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0 systemProtocol:(id)a1 dialogParameters:(id)a2;

@end
