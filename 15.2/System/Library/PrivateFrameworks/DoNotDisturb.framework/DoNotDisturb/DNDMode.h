@class NSString, NSUUID, NSURL;

@interface DNDMode : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSString *defaultTintColorName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *symbolImageName;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long semanticType;
@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic) unsigned long long visibility;
@property (readonly, copy, nonatomic) NSURL *settingsURL;
@property (readonly, copy, nonatomic) NSURL *setupURL;

+ (id)defaultMode;
+ (unsigned long long)maxUIAddableModes;
+ (id)placeholderModeFromMode:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_name;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 modeIdentifier:(id)a1 symbolImageName:(id)a2 tintColorName:(id)a3 semanticType:(long long)a4;
- (id)initWithName:(id)a0 modeIdentifier:(id)a1 symbolImageName:(id)a2 tintColorName:(id)a3 semanticType:(long long)a4 visibility:(unsigned long long)a5 identifier:(id)a6;
- (id)_initWithMode:(id)a0;

@end
