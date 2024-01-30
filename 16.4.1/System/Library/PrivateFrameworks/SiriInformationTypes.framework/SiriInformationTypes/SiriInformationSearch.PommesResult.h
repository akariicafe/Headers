@interface SiriInformationSearch.PommesResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resultId;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ metadata;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
