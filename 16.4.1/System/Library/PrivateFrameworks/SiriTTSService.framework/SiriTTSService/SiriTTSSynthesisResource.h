@class NSString;

@interface SiriTTSSynthesisResource : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ language;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *language;
@property (nonatomic) void /* unknown type, empty encoding */ version;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
