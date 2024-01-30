@interface ProximityReader.InternalOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ returnReadResultImmediately;
    void /* unknown type, empty encoding */ includeErrorInReadResult;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
