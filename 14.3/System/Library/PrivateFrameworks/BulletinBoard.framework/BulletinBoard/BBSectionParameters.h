@class BBSectionSubtypeParameters, NSUUID, NSMutableDictionary, NSString, BBSectionIcon;

@interface BBSectionParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters;
@property (retain, nonatomic) NSMutableDictionary *allSubtypeParameters;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) BBSectionIcon *icon;
@property (nonatomic) BOOL showsSubtitle;
@property (nonatomic) BOOL usesVariableLayout;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (nonatomic) BOOL orderSectionUsingRecencyDate;
@property (nonatomic) BOOL showsDateInFloatingLockScreenAlert;

- (id)replacementObjectForCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)allSubtypes;
- (id)parametersForSubtype:(long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
