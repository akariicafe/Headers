@class NSURL, NSString;

@interface NSPersistentHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage> {
    struct sqlite3 { } *persistentDb;
    struct sqlite3_stmt { } *insertCookiesStmt;
    struct sqlite3_stmt { } *selectDomainCookiesStmt;
    struct sqlite3_stmt { } *selectAllCookiesStmt;
    struct sqlite3_stmt { } *deleteCookiesStmt;
    struct sqlite3_stmt { } *deleteAllCookiesStmt;
}

@property (retain) NSURL *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCookie:(id)a0;
- (id)initWithPath:(id)a0;
- (void)beginTransaction;
- (void)deleteCookie:(id)a0;
- (id)getAllCookies;
- (void)deleteCookies:(id)a0;
- (void)deleteAllCookies;
- (void)deleteCookiesWithFilter:(id)a0;
- (void)commitTransaction;
- (id)getCookiesWithFilter:(id)a0;
- (void)setCookies:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
