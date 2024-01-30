@class NSString, NSArray;

@interface ABNamePredicate : ABPredicate {
    void *_addressBook;
    void *_tokenizations;
    struct __CFArray { } *_tokenizationSortKeys;
}

@property (nonatomic) void *addressBook;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *sources;
@property (retain, nonatomic) NSArray *groups;
@property (nonatomic) void *source;
@property (nonatomic) void *group;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) BOOL matchWholeWords;
@property (nonatomic) BOOL matchPersonOrCompanyNamesExclusively;
@property (nonatomic) BOOL matchPreferredName;
@property (nonatomic) BOOL generateExceprts;
@property (retain, nonatomic) NSArray *scopedContactIdentifiers;

- (BOOL)isValid;
- (void)dealloc;
- (id)init;
- (id)predicateFormat;
- (id)_personNameKeys;
- (id)_matchClauseForColumns:(id)a0 requiringAllTerms:(BOOL)a1;
- (id)_personNonNameKeys;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 withBindingOffset:(int *)a1 predicateIdentifier:(int)a2;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 withBindingOffset:(int *)a1 predicateIdentifier:(int)a2;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 columnOffset:(int)a1;
- (id)emphasizedExcerptStringForMatchString:(id)a0;
- (id)queryJoinsInCompound:(BOOL)a0 predicateIdentifier:(int)a1;
- (id)queryRankStringForPredicateIdentifier:(int)a0;
- (id)querySelectPropertiesForPredicateIdentifier:(int)a0;
- (id)queryWhereStringForPredicateIdentifier:(int)a0;
- (void *)tokenizations;

@end
