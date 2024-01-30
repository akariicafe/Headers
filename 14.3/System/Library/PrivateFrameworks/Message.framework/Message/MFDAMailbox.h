@class NSString;

@interface MFDAMailbox : MFMailboxUid {
    NSString *_folderID;
}

@property (copy) NSString *folderID;

- (id)_privacySafeDescription;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 attributes:(unsigned int)a1 account:(id)a2 folderID:(id)a3;
- (BOOL)mergeWithUserInfo:(id)a0;
- (id)URLWithAccount:(id)a0;
- (id)_folderID;
- (id)dictionaryRepresentation;
- (id)displayName;

@end
