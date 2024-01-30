@interface RequestDispatcherBridges.ServerPromptData : NSObject <AFContextSnapshot, NSSecureCoding> {
    void /* unknown type, empty encoding */ legacyNLContext;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)serializedBackingStore;
- (id)init;
- (void).cxx_destruct;

@end
