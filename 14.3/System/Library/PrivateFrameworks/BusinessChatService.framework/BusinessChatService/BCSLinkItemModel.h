@class NSObject, NSArray, BCSLinkItemIdentifier, NSString, NSURL, NSDictionary, NSNumber;

@interface BCSLinkItemModel : NSObject <BSDescriptionProviding, BCSLinkItemDescribing, BCSItemIdentifying, NSCopying, NSSecureCoding> {
    BCSLinkItemIdentifier *_itemIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_linkItemIdentifier) BCSLinkItemIdentifier *linkItemIdentifier;
@property (retain, nonatomic) NSArray *businessLinkContentItemModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) NSURL *linkURL;
@property (readonly, copy, nonatomic) NSString *fullHash;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, retain, nonatomic) NSString *heroImageURLString;
@property (readonly, retain, nonatomic) NSString *iconImageURLString;
@property (readonly, retain, nonatomic) NSURL *redirectURL;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) BOOL isPoweredBy;
@property (readonly, retain, nonatomic) NSDictionary *mapIconStyleAttributes;
@property (readonly, retain, nonatomic) NSNumber *mapItemMUID;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;

+ (id)linkItemModelsFromLinkJSONObj:(id)a0;
+ (id)linkItemModelsFromRecords:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)matchesItemIdentifying:(id)a0;
- (id)initWithLinkURL:(id)a0 bundleID:(id)a1 heroImageURLString:(id)a2 iconImageURLString:(id)a3 redirectURL:(id)a4 action:(long long)a5 mapIconStyleAttributes:(id)a6 mapItemMUID:(id)a7 businessLinkContentItemModels:(id)a8 isPoweredBy:(BOOL)a9;
- (id)initWithLinkMessage:(id)a0 bucketID:(id)a1;

@end
