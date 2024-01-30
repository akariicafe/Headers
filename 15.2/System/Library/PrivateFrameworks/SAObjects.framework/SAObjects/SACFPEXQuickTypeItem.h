@class NSArray, NSString, NSDate;

@interface SACFPEXQuickTypeItem : SACFPEXItem

@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *itemFlags;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *originatingBundleId;
@property (copy, nonatomic) NSString *originatingWebsiteURL;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *value;

+ (id)quickTypeItem;
+ (id)quickTypeItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
