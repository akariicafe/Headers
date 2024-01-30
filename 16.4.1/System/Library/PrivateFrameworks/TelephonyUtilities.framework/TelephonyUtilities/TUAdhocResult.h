@class NSString, CNContact, NSArray, TUSearchController;

@interface TUAdhocResult : NSObject <TUSearchResult>

@property (retain, nonatomic) NSString *value;
@property (weak) TUSearchController *searchController;
@property (readonly) NSString *displayName;
@property (readonly) NSString *callerId;
@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *isoCountryCode;
@property (readonly) NSArray *handles;
@property (readonly) long long mostRecentCallType;
@property (readonly) BOOL mostRecentCallWasMissed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *idsCanonicalDestinations;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;

@end
