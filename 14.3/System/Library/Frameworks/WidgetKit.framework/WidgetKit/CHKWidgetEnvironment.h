@class NSString;

@interface CHKWidgetEnvironment : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ tuples;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
