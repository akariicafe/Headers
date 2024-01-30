@class DAMailAccount, NSString;

@interface MFDARequestQueue : MFRequestQueue {
    DAMailAccount *_account;
    NSString *_folderID;
}

- (void).cxx_destruct;
- (id)filterRequests:(id)a0;
- (id)initWithAccount:(id)a0 folderID:(id)a1;
- (BOOL)processRequests:(id)a0;

@end
