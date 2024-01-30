@class NSString, NSArray;

@interface FBKSectionIdentifierGroup : FBKDiffableSection

@property (retain, nonatomic) NSString *givenSectionIdentifier;
@property (retain, nonatomic) NSArray *givenRowIdentifiers;

- (id)sectionIdentifier;
- (void).cxx_destruct;
- (id)initWithSectionIdentifier:(id)a0;
- (id)rowIdentifiers;

@end
