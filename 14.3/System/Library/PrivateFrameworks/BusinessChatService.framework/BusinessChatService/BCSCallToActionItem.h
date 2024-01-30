@class NSString;

@interface BCSCallToActionItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) BOOL isDefault;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCallToAction:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 language:(id)a2 body:(id)a3 isDefault:(BOOL)a4;

@end
