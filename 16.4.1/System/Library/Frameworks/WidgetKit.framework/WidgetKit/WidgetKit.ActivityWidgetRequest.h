@interface WidgetKit.ActivityWidgetRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ descriptor;
    void /* unknown type, empty encoding */ defaultPayload;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ isStale;
    void /* unknown type, empty encoding */ payloadID;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ jindoEnvironment;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
