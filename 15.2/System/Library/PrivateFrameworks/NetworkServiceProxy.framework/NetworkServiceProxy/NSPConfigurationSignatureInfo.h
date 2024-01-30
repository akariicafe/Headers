@class NSArray, NSData;

@interface NSPConfigurationSignatureInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) unsigned long long signatureAlgorithm;

+ (void)removeFromPreferences;

- (void)encodeWithCoder:(id)a0;
- (id)initFromPreferences;
- (void).cxx_destruct;
- (BOOL)saveToPreferences;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
