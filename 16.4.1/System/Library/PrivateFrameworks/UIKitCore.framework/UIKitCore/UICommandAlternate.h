@class NSString;

@interface UICommandAlternate : NSObject <_UIMenuLeafAlternate, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id sender;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alternateWithTitle:(id)a0 action:(SEL)a1 modifierFlags:(long long)a2;

- (void)encodeWithCoder:(id)a0;
- (long long)_leafKeyModifierFlags;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_resolvedTargetFromFirstTarget:(id)a0 sender:(id)a1;
- (void)_performWithTarget:(id)a0 sender:(id)a1;
- (id)initWithModifierFlags:(long long)a0;
- (id)initWithTitle:(id)a0 action:(SEL)a1 modifierFlags:(long long)a2;

@end
