@class NSString;

@interface HKListUserDomainConcept : HKUserDomainConcept <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long listType;
@property (readonly, copy, nonatomic) NSString *listName;

+ (id)_typeIdentifier;

- (BOOL)unitTesting_isIdentical:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)initWithListType:(unsigned long long)a0 listName:(id)a1;
- (void)_setListName:(id)a0;
- (void)_setListType:(unsigned long long)a0;
- (id)listByAddingUserDomainConcepts:(id)a0;
- (id)_mutableCopyOfLinks;
- (id)initWithListType:(unsigned long long)a0;
- (id)listByUpdatingName:(id)a0;
- (id)listByAddingUserDomainConcept:(id)a0;
- (id)listByInsertingUserDomainConcept:(id)a0 atIndex:(unsigned long long)a1;
- (id)listByRemovingUserDomainConceptAtIndex:(unsigned long long)a0;
- (id)listByRemovingAllUserDomainConcepts;
- (id)listByExchangingConceptAtIndex:(unsigned long long)a0 withIndex:(unsigned long long)a1;
- (id)listByReplacingConceptAtIndex:(unsigned long long)a0 withUserDomainConcept:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_dataDescription;
- (id)initWithCodingCollection:(id)a0 linkCollection:(id)a1 propertyCollection:(id)a2;
- (id)semanticIdentifier;
- (BOOL)unitTesting_isIdentical:(id)a0 ignoreModificationTimestamp:(BOOL)a1;

@end
