@class NSSet, NSString;

@interface CNUIMeContactComparisonStrategyUnified : NSObject <CNMeContactComparisonStrategy>

@property (retain, nonatomic) NSSet *meContactIdentifiersFound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMeContact:(id)a0;
- (void).cxx_destruct;
- (id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)a0;
- (void)meContactChangedInStore:(id)a0;
- (id)meContactIdentifiers;

@end
