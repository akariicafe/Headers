@class NSString, CNContact;

@interface CNChangeHistoryUpdateContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) BOOL imagesChanged;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)contactIdentifiers;
- (id)initWithCoder:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (id)initWithContact:(id)a0 contactIdentifier:(id)a1 imagesChanged:(BOOL)a2;
- (id)initWithContact:(id)a0 imagesChanged:(BOOL)a1;
- (id)initWithContactIdentifier:(id)a0 imagesChanged:(BOOL)a1;

@end
