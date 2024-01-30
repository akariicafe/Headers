@class NSString, NSArray, CNAutocompleteNameComponents, CNAutocompleteResultValue, NSDictionary, NSNumber;

@interface CNAutocompleteResult : NSObject {
    BOOL _hasPrefixMatch;
    NSString *_descriptionMemo;
}

@property (readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *groupIdentifier;
@property (readonly, copy) id address;
@property (readonly) long long addressType;
@property (readonly, copy) NSArray *userInfos;
@property long long resultType;
@property (copy) NSString *displayName;
@property (copy) NSString *identifier;
@property (retain) CNAutocompleteResultValue *value;
@property (copy) CNAutocompleteNameComponents *nameComponents;
@property (copy) NSDictionary *userInfo;
@property (copy) NSString *lastSendingAddress;
@property BOOL hasPreferredDomain;
@property unsigned long long sourceType;
@property (copy, nonatomic) id /* block */ contactProvider;
@property (copy, nonatomic) id /* block */ membersProvider;
@property (copy, nonatomic) NSArray *diagnosticLogs;
@property (retain, nonatomic) NSNumber *recentsIdentifier;
@property (copy, nonatomic) id /* block */ ignoreResultBlock;

+ (unsigned long long)category;
+ (id)comparators;
+ (id)messagesResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 addressType:(long long)a4 identifier:(id)a5 contactProvider:(id /* block */)a6 groupMembersProvider:(id /* block */)a7 userInfo:(id)a8;
+ (BOOL)isSourceTypeConsideredSuggestion:(unsigned long long)a0;
+ (id)localeForHashing;
+ (id)resultWithDisplayName:(id)a0;
+ (id)contactStoreForFetchingFullContacts;
+ (id)contactResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2 identifier:(id)a3;
+ (id)groupResultWithDisplayName:(id)a0 identifier:(id)a1;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4 userInfo:(id)a5;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4;
+ (id)messagesResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4 userInfo:(id)a5;

- (id)contactWithKeysToFetch:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)members:(id *)a0;
- (id)diagnosticLog;
- (BOOL)isEqual:(id)a0;
- (id)resultTypeDescription;
- (void)addDiagnosticLog:(id /* block */)a0;
- (void)updateUsingInformationFromRelatedResult:(id)a0;
- (void)addDiagnosticLogFuture:(id)a0;
- (long long)compare:(id)a0 withPriorityComparator:(id /* block */)a1;
- (id)stringForHashing;
- (id)sourceTypeDescription;

@end
