@class NSArray, NSString;

@interface _CNAutocompleteAggregateSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

@property (readonly) NSArray *policies;
@property (readonly) BOOL includeContacts;
@property (readonly) BOOL includeRecents;
@property (readonly) BOOL includeSuggestions;
@property (readonly) BOOL includeLocalExtensions;
@property (readonly) BOOL includeDirectoryServers;
@property (readonly) BOOL includeCalendarServers;
@property (readonly) BOOL includeSupplementalResults;
@property (readonly) BOOL includePredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPolicies:(id)a0;

@end
