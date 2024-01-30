@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding> {
    struct UsagePage_Usage_Pair { long long usagePage; long long usage; } _mappings[41];
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)mapUsagePage:(long long)a0 usage:(long long)a1 toGamepadElement:(long long)a2;
- (long long)gamepadElementForUsagePage:(long long)a0 usage:(long long)a1;

@end
