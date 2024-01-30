@class UIResponder, NSMutableArray;

@interface _UIResponder_Override_Host : NSObject {
    NSMutableArray *_overrides;
}

@property (readonly, weak, nonatomic) UIResponder *owner;

+ (id)hostForResponder:(id)a0;

- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)attachOverrider:(id)a0 forTypes:(long long)a1;
- (void)detachOverrider:(id)a0 forTypes:(long long)a1;
- (long long)typesForResponder:(id)a0;

@end
