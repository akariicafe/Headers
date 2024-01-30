@class NSString, CNContact;

@interface CNChangeHistoryAddContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *containerIdentifier;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;
- (void)acceptEventVisitor:(id)a0;
- (id)initWithContact:(id)a0 containerIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
