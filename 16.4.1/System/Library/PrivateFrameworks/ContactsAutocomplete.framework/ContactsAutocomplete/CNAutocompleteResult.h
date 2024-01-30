@class _PSSuggestion, NSString, NSArray, CNAutocompleteNameComponents, CNAutocompleteResultValue, NSDictionary, NSNumber;

@interface CNAutocompleteResult : NSObject {
    BOOL _hasPrefixMatch;
    NSString *_descriptionMemo;
}

@property (readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *groupIdentifier;
@property (readonly, copy) id address;
@property (readonly) long long addressType;
@property (readonly, copy) NSArray *userInfos;
@property BOOL hasPreferredDomain;
@property unsigned long long sourceType;
@property long long resultType;
@property (copy) NSString *displayName;
@property (copy) NSString *identifier;
@property (retain) CNAutocompleteResultValue *value;
@property (copy) CNAutocompleteNameComponents *nameComponents;
@property (copy) NSDictionary *userInfo;
@property (copy) NSString *lastSendingAddress;
@property (copy, nonatomic) id /* block */ contactProvider;
@property (copy, nonatomic) id /* block */ membersProvider;
@property (copy, nonatomic) NSArray *diagnosticLogs;
@property (retain, nonatomic) NSNumber *recentsIdentifier;
@property (copy, nonatomic) id /* block */ ignoreResultBlock;
@property (retain) _PSSuggestion *psSuggestion;

+ (unsigned long long)category;
+ (id)comparators;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4 userInfo:(id)a5;
+ (id)messagesResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 addressType:(long long)a4 identifier:(id)a5 contactProvider:(id /* block */)a6 groupMembersProvider:(id /* block */)a7 userInfo:(id)a8;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4;
+ (id)contactResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2 identifier:(id)a3;
+ (id)contactStoreForFetchingFullContacts;
+ (id)groupResultWithDisplayName:(id)a0 identifier:(id)a1;
+ (BOOL)isSourceTypeConsideredSuggestion:(unsigned long long)a0;
+ (id)localeForHashing;
+ (id)messagesResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4 userInfo:(id)a5;
+ (id)resultWithDisplayName:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)diagnosticLog;
- (id)contactWithKeysToFetch:(id)a0 error:(id *)a1;
- (id)members:(id *)a0;
- (long long)compare:(id)a0 withPriorityComparator:(id /* block */)a1;
- (void)addDiagnosticLog:(id /* block */)a0;
- (void)addDiagnosticLogFuture:(id)a0;
- (id)expandMembers;
- (id)resultTypeDescription;
- (BOOL)shouldUseGroupNamingForResult;
- (BOOL)shouldUseGroupNamingForSource;
- (id)sourceTypeDescription;
- (id)stringForHashing;
- (void)updateUsingInformationFromRelatedResult:(id)a0;

@end
