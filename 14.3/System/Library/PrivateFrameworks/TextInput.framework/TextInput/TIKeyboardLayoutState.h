@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *inputMode;
@property (readonly, nonatomic) NSString *softwareLayout;
@property (nonatomic) BOOL hasCandidateKey;
@property (nonatomic) BOOL hasAccentKey;
@property (nonatomic) BOOL canMultitap;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (nonatomic) BOOL isKanaPlane;
@property (nonatomic) BOOL diacriticForwardCompose;
@property (copy, nonatomic) NSString *layoutTag;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) BOOL interfaceIdiomIsPad;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)setInterfaceIdiomIsPad;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
