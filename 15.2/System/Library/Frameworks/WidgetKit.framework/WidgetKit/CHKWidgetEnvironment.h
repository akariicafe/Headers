@class NSString;

@interface CHKWidgetEnvironment : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ tuples;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
