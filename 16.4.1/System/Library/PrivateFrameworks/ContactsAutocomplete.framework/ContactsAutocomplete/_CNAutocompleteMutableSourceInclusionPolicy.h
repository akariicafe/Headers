@class NSString;

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

@property BOOL includeContacts;
@property BOOL includeRecents;
@property BOOL includeStewie;
@property BOOL includeSuggestions;
@property BOOL includeLocalExtensions;
@property BOOL includeDirectoryServers;
@property BOOL includeCalendarServers;
@property BOOL includeSupplementalResults;
@property BOOL includePredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
