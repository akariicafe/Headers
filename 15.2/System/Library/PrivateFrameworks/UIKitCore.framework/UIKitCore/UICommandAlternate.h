@class NSString;

@interface UICommandAlternate : NSObject <_UIMenuLeafAlternate, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alternateWithTitle:(id)a0 action:(SEL)a1 modifierFlags:(long long)a2;

- (long long)_leafKeyModifierFlags;
- (void)encodeWithCoder:(id)a0;
- (id)_resolvedTargetFromFirstTarget:(id)a0;
- (void)_performWithTarget:(id)a0;
- (id)initWithTitle:(id)a0 action:(SEL)a1 modifierFlags:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModifierFlags:(long long)a0;

@end
