@class NSString, AFAccount, NSNumber;

@interface AFUISiriSessionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assistantVersion;
@property (copy, nonatomic) AFAccount *activeAccount;
@property (copy, nonatomic) NSNumber *userAccountCount;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)setAssistantVersionAndGenerateLightweightInfo:(id)a0;
- (id)setActiveAccountAndGenerateLightweightInfo:(id)a0;
- (id)setUserAccountCountGenerateLightweightInfo:(long long)a0;
- (id)_setPropertyValue:(id)a0 withSelector:(SEL)a1;
- (id)_strippedInfo;
- (BOOL)applyInfo:(id)a0;

@end
