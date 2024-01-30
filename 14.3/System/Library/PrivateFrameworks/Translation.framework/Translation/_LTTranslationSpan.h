@class NSString, NSData;

@interface _LTTranslationSpan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) BOOL shouldTranslate;
@property (copy, nonatomic) NSData *metaInfoData;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
