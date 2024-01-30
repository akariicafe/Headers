@interface ProximityReader.ReadResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ dataType;
    void /* unknown type, empty encoding */ transactionId;
    void /* unknown type, empty encoding */ cardReaderBlob;
    void /* unknown type, empty encoding */ generalCardData;
    void /* unknown type, empty encoding */ vasEntries;
    void /* unknown type, empty encoding */ readOutcome;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
