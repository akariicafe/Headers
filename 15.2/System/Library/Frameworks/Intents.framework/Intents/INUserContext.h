@class INUserContextStore;

@interface INUserContext : NSObject <NSSecureCoding> {
    INUserContextStore *_store;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (long long)_type;

- (void)encodeWithCoder:(id)a0;
- (void)becomeCurrent;
- (void).cxx_destruct;
- (void)_setStore:(id)a0;
- (void)_becomeCurrentNoHelper;
- (id)_init;
- (id)initWithCoder:(id)a0;

@end
