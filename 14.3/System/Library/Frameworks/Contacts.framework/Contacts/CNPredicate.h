@class NSString, NSArray, NSPredicate;

@interface CNPredicate : NSPredicate <CNDonatedContactsPredicate, NSCopying> {
    NSPredicate *_cn_predicate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *mainStoreContactIdentifiers;
@property (nonatomic) BOOL augmentMainStoreResults;

+ (id)os_log;

- (id)predicateFormat;
- (id)shortDebugDescription;
- (id)contactsFromDonationStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (void)mainStoreDidFetchContacts:(id)a0 unifiedFetch:(BOOL)a1;
- (id)cn_predicate;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)a0;
- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
