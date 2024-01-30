@class NSArray, LNStaticDeferredLocalizedString;

@interface LNConfirmationActionName : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL destructive;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *acceptLabel;
@property (readonly, copy, nonatomic) NSArray *acceptAlternatives;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *denyLabel;
@property (readonly, copy, nonatomic) NSArray *denyAlternatives;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 destructive:(BOOL)a1;
- (id)initWithType:(long long)a0 destructive:(BOOL)a1 acceptLabel:(id)a2 acceptAlternatives:(id)a3 denyLabel:(id)a4 denyAlternatives:(id)a5;

@end
