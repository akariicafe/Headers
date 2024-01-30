@class MFIMAPFetchResult, NSArray, NSString, MFIMAPResponseConsumer, NSDictionary, extraAttributes;

@interface MFIMAPResponse : NSObject <EFPubliclyDescribable> {
    unsigned char _responseType : 8;
    NSString *_tag;
    NSDictionary *_keyValuePairs;
    union _IMAPResponseData { struct { int responseCode; id responseInfoAndOrUserData; } basic; NSArray *capabilities; unsigned long long number; NSArray *flags; struct { NSString *mailboxName; NSDictionary *entries; } status; NSArray *searchResults; struct { unsigned long long mailboxAttributes; extraAttributes *separatorAndOrMboxName; NSArray *x0; } list; struct { unsigned long long number; NSArray *items; unsigned long long modSeqNumber; } fetch; struct { NSString *mailboxName; NSArray *quotaRootNames; } quotaRoot; struct { NSString *quotaRootName; NSArray *quotas; } quota; struct { NSString *uids; MFIMAPFetchResult *flagsFetchResult; unsigned char change : 1; } uidFlags; NSDictionary *serverInfo; struct { NSArray *private; NSArray *public; NSArray *shared; } namespace; struct { NSString *name; NSArray *parameters; } other; } _data;
}

@property (retain, nonatomic) MFIMAPResponseConsumer *responseConsumer;
@property (copy, nonatomic) NSArray *privateNamespaces;
@property (copy, nonatomic) NSArray *publicNamespaces;
@property (copy, nonatomic) NSArray *sharedNamespaces;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)separator;
- (unsigned long long)number;
- (id)parameters;
- (id)userData;
- (void)setTag:(id)a0;
- (id)responseName;
- (void)setNumber:(unsigned long long)a0;
- (id)uids;
- (id)extraAttributes;
- (void)dealloc;
- (void)setFetchResults:(id)a0;
- (id)initWithString:(id)a0;
- (id)tag;
- (id)initWithResponseType:(int)a0;
- (id)quotas;
- (id)keyValuePairs;
- (void)setResponseType:(int)a0;
- (id)mailboxName;
- (id)flags;
- (int)responseCode;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)fetchResults;
- (id)capabilities;
- (int)responseType;
- (void)setCapabilities:(id)a0;
- (id)serverInfo;
- (void)setFlags:(id)a0;
- (void)setServerInfo:(id)a0;
- (void)setSearchResults:(id)a0;
- (id)responseInfo;
- (id)searchResults;
- (BOOL)isResponseWithCode:(int)a0;
- (BOOL)isAlertResponse;
- (id)userString;
- (id)statusEntries;
- (BOOL)isUntagged;
- (id)initWithConnection:(id)a0 responseConsumer:(id)a1;
- (unsigned long long)mailboxAttributes;
- (void)setUidFlagsChange:(int)a0;
- (void)setUids:(id)a0;
- (void)setFlagsFetchResult:(id)a0;
- (id)fetchResultWithType:(int)a0;
- (id)_descriptionWithFullData:(BOOL)a0;
- (id)quotaRootNames;
- (id)quotaRootName;
- (int)uidFlagsChange;
- (id)flagsFetchResult;
- (void)setUserData:(id)a0 responseCode:(int)a1 responseInfo:(id)a2;
- (void)setMailboxName:(id)a0 statusEntries:(id)a1;
- (void)setMailboxAttributes:(unsigned long long)a0 separator:(id)a1 mailboxName:(id)a2 extraAttributes:(id)a3;
- (void)setMailboxName:(id)a0 quotaRootNames:(id)a1;
- (void)setQuotaRootName:(id)a0 quotas:(id)a1;
- (void)setResponseName:(id)a0 parameters:(id)a1;

@end
