@class NSString;

@interface MCProfileWarning : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedBody;
@property (nonatomic) BOOL isLongForm;

+ (id)warningWithLocalizedTitle:(id)a0 localizedBody:(id)a1 isLongForm:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)serializedDictionary;
- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 localizedBody:(id)a1 isLongForm:(BOOL)a2;
- (BOOL)isEqualToProfileWarning:(id)a0;

@end
