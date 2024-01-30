@class NSString, NSOrderedSet, NSURL, SFRankingFeedback, NTPBSectionDisplayDescriptor;

@interface NTSection : NSObject <NTSectionDisplayDescriptor, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSURL *actionURL;
@property (copy, nonatomic) NSOrderedSet *items;
@property (copy, nonatomic) SFRankingFeedback *rankingFeedback;
@property (copy, nonatomic) NTPBSectionDisplayDescriptor *displayDescriptor;
@property (copy, nonatomic) NSString *referralBarName;
@property (copy, nonatomic) NSString *backingTagID;
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nameColorLight;
@property (readonly, copy, nonatomic) NSString *nameColorDark;
@property (readonly, copy, nonatomic) NSURL *nameActionURL;
@property (readonly, copy, nonatomic) NSString *backgroundColorLight;
@property (readonly, copy, nonatomic) NSString *backgroundColorDark;

+ (id)_itemClassesByType;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 actionTitle:(id)a1 actionURL:(id)a2 personalizationFeatureID:(id)a3 items:(id)a4 rankingFeedback:(id)a5 displayDescriptor:(id)a6 referralBarName:(id)a7 backingTagID:(id)a8;

@end
