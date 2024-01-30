@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue {
    DAMailAccount *_account;
    NSString *_folderID;
}

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 folderID:(id)a1;
- (id)filterRequests:(id)a0;
- (BOOL)processRequests:(id)a0;

@end
