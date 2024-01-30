@class UIResponder;

@interface _UIResponder_Override : NSObject

@property (readonly, weak, nonatomic) UIResponder *owner;
@property (readonly, weak, nonatomic) UIResponder *target;
@property (readonly, nonatomic) long long types;

+ (id)overrideForResponder:(id)a0 withTarget:(id)a1 forType:(long long)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
