@class NSString, CNContact;

@interface CNChangeHistoryAddContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *containerIdentifier;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)acceptEventVisitor:(id)a0;
- (id)initWithContact:(id)a0 containerIdentifier:(id)a1;
- (long long)comparisonResultWithinSameClass:(id)a0;

@end
