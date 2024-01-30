@class NSString, CNUserDefaults;

@interface _CNAutocompleteUserDefaultsSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

@property (readonly) CNUserDefaults *userDefaults;
@property (readonly) BOOL includeContacts;
@property (readonly) BOOL includeRecents;
@property (readonly) BOOL includeStewie;
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

- (id)initWithUserDefaults:(id)a0;
- (void).cxx_destruct;

@end
