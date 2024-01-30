@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid

@property (copy, nonatomic) NSString *fakeFullPath;
@property (copy, nonatomic) NSString *fakeURLString;
@property (nonatomic) BOOL fakeIsSpecialMailboxUid;
@property (nonatomic) long long fakeMailboxID;
@property (retain, nonatomic) NSString *displayName;

- (id)fullPath;
- (id)URLString;
- (BOOL)isStore;
- (void).cxx_destruct;
- (id)URL;
- (id)store;
- (long long)mailboxID;
- (BOOL)isSpecialMailboxUid;
- (id)initWithAccount:(id)a0 URLString:(id)a1 fullPath:(id)a2 isSpecial:(BOOL)a3;
- (id)initWithAccount:(id)a0 URLString:(id)a1 fullPath:(id)a2 isSpecial:(BOOL)a3 mailboxID:(long long)a4;
- (id)initWithAccount:(id)a0 URLString:(id)a1 fullPath:(id)a2;

@end
