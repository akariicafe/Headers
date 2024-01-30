@class NSData, NSString;

@interface CSVoiceTriggerRTModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *modelData;
@property (readonly, nonatomic) NSString *modelLocale;
@property (readonly, nonatomic) NSString *modelHash;
@property (readonly, nonatomic) NSData *digest;
@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) NSData *certificate;

- (void).cxx_destruct;
- (id)builtInRTModelDictionary;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0 hash:(id)a1 locale:(id)a2;
- (id)initWithData:(id)a0 hash:(id)a1 locale:(id)a2 digest:(id)a3 signature:(id)a4 certificate:(id)a5;
- (id)initWithHash:(id)a0 locale:(id)a1;

@end
