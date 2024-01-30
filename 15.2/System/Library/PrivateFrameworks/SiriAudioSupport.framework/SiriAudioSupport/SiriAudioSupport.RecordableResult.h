@interface SiriAudioSupport.RecordableResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ timeElapsed;
    void /* unknown type, empty encoding */ rows;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ signalTiming;
    void /* unknown type, empty encoding */ test;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
