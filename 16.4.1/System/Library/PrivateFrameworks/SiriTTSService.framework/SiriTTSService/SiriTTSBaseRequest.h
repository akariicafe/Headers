@class NSURL, NSString;

@interface SiriTTSBaseRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requestCreatedTime;
    void /* unknown type, empty encoding */ clientBundleId;
    void /* unknown type, empty encoding */ accessoryId;
    void /* unknown type, empty encoding */ outputPath;
    void /* unknown type, empty encoding */ didReportInstrument;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic, copy) id /* block */ didReportInstrument;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
