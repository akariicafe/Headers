@class NSString;

@interface SmartReplies.SRSmartRepliesCaption : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ caption;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCaption:(id)a0 type:(long long)a1;

@end
