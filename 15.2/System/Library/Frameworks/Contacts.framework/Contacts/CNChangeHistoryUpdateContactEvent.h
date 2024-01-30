@class CNContact;

@interface CNChangeHistoryUpdateContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) BOOL imagesChanged;
@property (readonly, nonatomic) CNContact *contact;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithContact:(id)a0 imagesChanged:(BOOL)a1;
- (void)acceptEventVisitor:(id)a0;
- (long long)comparisonResultWithinSameClass:(id)a0;

@end
