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

- (void)setCapabilities:(id)a0;
- (unsigned long long)number;
- (id)parameters;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setFlags:(id)a0;
- (void)setTag:(id)a0;
- (id)capabilities;
- (id)extraAttributes;
- (void)setSearchResults:(id)a0;
- (id)separator;
- (id)userData;
- (id)flags;
- (id)initWithString:(id)a0;
- (id)responseName;
- (id)mailboxName;
- (id)fetchResults;
- (id)serverInfo;
- (id)tag;
- (void)dealloc;
- (id)keyValuePairs;
- (int)responseCode;
- (void)setNumber:(unsigned long long)a0;
- (id)searchResults;
- (void)setServerInfo:(id)a0;
- (int)responseType;
- (id)responseInfo;
- (BOOL)isAlertResponse;
- (id)_descriptionWithFullData:(BOOL)a0;
- (id)fetchResultWithType:(int)a0;
- (id)flagsFetchResult;
- (id)initWithConnection:(id)a0 responseConsumer:(id)a1;
- (id)initWithResponseType:(int)a0;
- (BOOL)isResponseWithCode:(int)a0;
- (BOOL)isUntagged;
- (unsigned long long)mailboxAttributes;
- (id)quotaRootName;
- (id)quotaRootNames;
- (id)quotas;
- (void)setFetchResults:(id)a0;
- (void)setFlagsFetchResult:(id)a0;
- (void)setMailboxAttributes:(unsigned long long)a0 separator:(id)a1 mailboxName:(id)a2 extraAttributes:(id)a3;
- (void)setMailboxName:(id)a0 quotaRootNames:(id)a1;
- (void)setMailboxName:(id)a0 statusEntries:(id)a1;
- (void)setQuotaRootName:(id)a0 quotas:(id)a1;
- (void)setResponseName:(id)a0 parameters:(id)a1;
- (void)setResponseType:(int)a0;
- (void)setUidFlagsChange:(int)a0;
- (void)setUids:(id)a0;
- (void)setUserData:(id)a0 responseCode:(int)a1 responseInfo:(id)a2;
- (id)statusEntries;
- (int)uidFlagsChange;
- (id)uids;
- (id)userString;

@end
