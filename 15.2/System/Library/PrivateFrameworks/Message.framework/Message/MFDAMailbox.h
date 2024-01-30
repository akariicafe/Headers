@class NSString;

@interface MFDAMailbox : MFMailboxUid {
    NSString *_folderID;
}

@property (copy) NSString *folderID;

- (id)displayName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)_folderID;
- (id)_privacySafeDescription;
- (id)initWithName:(id)a0 attributes:(unsigned int)a1 account:(id)a2 folderID:(id)a3;
- (BOOL)mergeWithUserInfo:(id)a0;
- (id)URLWithAccount:(id)a0;

@end
