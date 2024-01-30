@class NSString;

@interface CNChangeHistoryDeleteGroupEvent : CNChangeHistoryEvent

@property (readonly, copy, nonatomic) NSString *externalURI;
@property (readonly, copy, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *groupIdentifier;

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
- (id)initWithGroupIdentifier:(id)a0;
- (id)initWithGroupIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
