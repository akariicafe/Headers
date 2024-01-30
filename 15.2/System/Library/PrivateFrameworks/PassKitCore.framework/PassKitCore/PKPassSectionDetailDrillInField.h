@class NSArray, NSString;

@interface PKPassSectionDetailDrillInField : PKPassField

@property (retain, nonatomic) NSArray *sectionIdentifiers;
@property (nonatomic) long long authRequirement;
@property (retain, nonatomic) NSString *localizedTitle;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDrillInField;

@end
