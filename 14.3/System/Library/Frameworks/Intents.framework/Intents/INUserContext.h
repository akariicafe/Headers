@class INUserContextStore;

@interface INUserContext : NSObject <NSSecureCoding> {
    INUserContextStore *_store;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (long long)_type;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)becomeCurrent;
- (id)_init;
- (void)_setStore:(id)a0;
- (void)_becomeCurrentNoHelper;
- (void)encodeWithCoder:(id)a0;

@end
