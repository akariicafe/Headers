@class NSString;

@interface MCProfileWarning : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedBody;
@property (nonatomic) BOOL isLongForm;

+ (id)warningWithLocalizedTitle:(id)a0 localizedBody:(id)a1 isLongForm:(BOOL)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToProfileWarning:(id)a0;
- (id)initWithLocalizedTitle:(id)a0 localizedBody:(id)a1 isLongForm:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)serializedDictionary;
- (void)encodeWithCoder:(id)a0;

@end
