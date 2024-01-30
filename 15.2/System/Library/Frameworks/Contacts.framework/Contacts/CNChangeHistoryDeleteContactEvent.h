@class NSString;

@interface CNChangeHistoryDeleteContactEvent : CNChangeHistoryEvent

@property (readonly, copy, nonatomic) NSString *externalURI;
@property (readonly, copy, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *contactIdentifier;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)initWithContactIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;

@end
