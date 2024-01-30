@class MFIMAPFetchResult, NSArray, NSString, MFIMAPResponseConsumer, NSDictionary, extraAttributes;

@interface MFIMAPResponse : NSObject {
    unsigned char _responseType : 8;
    NSString *_tag;
    NSDictionary *_keyValuePairs;
    union _IMAPResponseData { struct { int responseCode; id responseInfoAndOrUserData; } basic; NSArray *capabilities; unsigned long long number; NSArray *flags; struct { NSString *mailboxName; NSDictionary *entries; } status; NSArray *searchResults; struct { unsigned long long mailboxAttributes; extraAttributes *separatorAndOrMboxName; NSArray *x0; } list; struct { unsigned long long number; NSArray *items; unsigned long long modSeqNumber; } fetch; struct { NSString *mailboxName; NSArray *quotaRootNames; } quotaRoot; struct { NSString *quotaRootName; NSArray *quotas; } quota; struct { NSString *uids; MFIMAPFetchResult *flagsFetchResult; unsigned char change : 1; } uidFlags; NSDictionary *serverInfo; struct { NSArray *private; NSArray *public; NSArray *shared; } namespace; struct { NSString *name; NSArray *parameters; } other; } _data;
}

@property (retain, nonatomic) MFIMAPResponseConsumer *responseConsumer;
@property (copy, nonatomic) NSArray *privateNamespaces;
@property (copy, nonatomic) NSArray *publicNamespaces;
@property (copy, nonatomic) NSArray *sharedNamespaces;

- (id)separator;
- (id)extraAttributes;
- (void)setTag:(id)a0;
- (id)initWithString:(id)a0;
- (void)setResponseType:(int)a0;
- (id)responseInfo;
- (id)capabilities;
- (id)uids;
- (id)tag;
- (id)keyValuePairs;
- (void)setFetchResults:(id)a0;
- (int)responseCode;
- (id)responseName;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setServerInfo:(id)a0;
- (void)setCapabilities:(id)a0;
- (id)description;
- (id)parameters;
- (id)flags;
- (id)userData;
- (void)setNumber:(unsigned long long)a0;
- (id)serverInfo;
- (unsigned long long)number;
- (id)searchResults;
- (void)dealloc;
- (id)quotas;
- (void)setSearchResults:(id)a0;
- (int)responseType;
- (void)setFlags:(id)a0;
- (id)fetchResults;
- (id)mailboxName;
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
