@class NSString, NSDictionary;

@interface CSLPRFStingSettingsModelData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSDictionary *actionsDictionary;
@property (retain, nonatomic) NSDictionary *secondaryActionsDictionary;
@property (retain, nonatomic) NSDictionary *shortcutsDictionary;
@property (retain, nonatomic) NSDictionary *startWorkoutsDictionary;

+ (id)fromExportData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)toExportData;

@end
