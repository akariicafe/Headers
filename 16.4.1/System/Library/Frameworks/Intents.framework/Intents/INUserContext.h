@class INUserContextStore;

@interface INUserContext : NSObject <NSSecureCoding> {
    INUserContextStore *_store;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (long long)_type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)becomeCurrent;
- (void).cxx_destruct;
- (void)_becomeCurrentNoHelper;
- (void)_setStore:(id)a0;

@end
