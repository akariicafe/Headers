@interface SKEContextUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ provideContextCommand;
    void /* unknown type, empty encoding */ nativeFlowContextCommand;
    void /* unknown type, empty encoding */ systemDialogActs;
    void /* unknown type, empty encoding */ rrEntities;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
