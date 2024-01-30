@class NSString;

@interface SiriTTSSynthesisVoice : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ language;
    void /* unknown type, empty encoding */ name;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) void /* unknown type, empty encoding */ footprint;
@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic) void /* unknown type, empty encoding */ gender;
@property (nonatomic) void /* unknown type, empty encoding */ version;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0 name:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
