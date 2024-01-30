@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) long long gender;
@property (readonly, copy, nonatomic) NSString *recordRoute;
@property (readonly, nonatomic) BOOL isVoiceTrigger;
@property (readonly, nonatomic) BOOL isDucking;
@property (readonly, nonatomic) BOOL isTwoShot;
@property (readonly, nonatomic) unsigned long long speechEndHostTime;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithStyle:(long long)a0 languageCode:(id)a1 gender:(long long)a2 recordRoute:(id)a3 isVoiceTrigger:(BOOL)a4 isDucking:(BOOL)a5 isTwoShot:(BOOL)a6 speechEndHostTime:(unsigned long long)a7;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
