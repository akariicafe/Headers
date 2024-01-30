@interface SiriInformationSearch.PommesRenderOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isImmersiveExperience;
    void /* unknown type, empty encoding */ isSquawkResponse;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
