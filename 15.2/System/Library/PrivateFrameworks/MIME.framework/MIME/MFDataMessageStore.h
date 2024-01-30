@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore {
    NSData *_data;
    Class _messageClass;
    NSString *_storagePath;
}

@property (retain, nonatomic) id mailboxUid;

- (id)message;
- (id)account;
- (id)storePath;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)setMessageClass:(Class)a0;
- (id)_cachedHeadersForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)storeData:(id)a0 forMimePart:(id)a1 isComplete:(BOOL)a2;
- (id)bodyDataForMessage:(id)a0 isComplete:(BOOL *)a1 isPartial:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (id)_cachedBodyForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)headerDataForMessage:(id)a0 downloadIfNecessary:(BOOL)a1;
- (BOOL)messageCanBeTriaged:(id)a0;
- (id)_cachedBodyDataForMessage:(id)a0 valueIfNotPresent:(id)a1;
- (id)storagePath;
- (void)setStoragePath:(id)a0;

@end
