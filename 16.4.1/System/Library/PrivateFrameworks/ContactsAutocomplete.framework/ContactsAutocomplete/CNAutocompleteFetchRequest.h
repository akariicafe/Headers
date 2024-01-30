@class NSArray, NSString, CNAutocompleteFetchContext, NSNumber;

@interface CNAutocompleteFetchRequest : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shouldIncludeGroupResultsImpl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *searchableProperties;
@property (readonly) NSString *triageIdentifier;
@property (copy) NSString *searchString;
@property (copy) NSString *priorityDomainForSorting;
@property unsigned long long searchType;
@property (copy) CNAutocompleteFetchContext *fetchContext;
@property BOOL includeContacts;
@property BOOL includeRecents;
@property BOOL includeStewie;
@property BOOL includeSuggestions;
@property BOOL includeLocalExtensions;
@property BOOL includeDirectoryServers;
@property BOOL includeCalendarServers;
@property BOOL includePredictions;
@property BOOL shouldIncludeGroupResults;
@property (copy) NSString *sendingAddress;
@property BOOL includeServers;

+ (id)request;
+ (id)makeTriageIdentifier;
+ (id)searchablePropertiesForSearchType:(unsigned long long)a0;

- (BOOL)isValid:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)executeWithDelegate:(id)a0;
- (id)includeDebugString;
- (id)searchTypeDebugString;
- (id)shouldIncludeGroupResultsDebugString;

@end
