@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask

@property (retain, nonatomic) NSSet *searchTypes;
@property (retain, nonatomic) NSSet *searchStrings;
@property (retain, nonatomic) CalDAVPrincipalSearchPropertySet *serverSupportSet;
@property (retain, nonatomic) id searchContext;

- (id)searchItems;
- (id)extraAttributes;
- (id)initWithSearchStrings:(id)a0 searchTypes:(id)a1 serverSupportSet:(id)a2 atURL:(id)a3;
- (void).cxx_destruct;

@end
