@interface ProximityReader.CardReaderErrorInternal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ code;
    void /* unknown type, empty encoding */ userInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
