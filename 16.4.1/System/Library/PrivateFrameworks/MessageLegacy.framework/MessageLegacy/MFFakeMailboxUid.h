@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid

@property (copy, nonatomic) NSString *fakeFullPath;
@property (copy, nonatomic) NSString *fakeURLString;
@property (nonatomic) BOOL fakeIsSpecialMailboxUid;
@property (retain, nonatomic) NSString *displayName;

- (id)URLString;
- (id)store;
- (void).cxx_destruct;
- (id)fullPath;
- (BOOL)isStore;
- (BOOL)isSpecialMailboxUid;
- (id)initWithAccount:(id)a0 URLString:(id)a1 fullPath:(id)a2;
- (id)initWithAccount:(id)a0 URLString:(id)a1 fullPath:(id)a2 isSpecial:(BOOL)a3;

@end
