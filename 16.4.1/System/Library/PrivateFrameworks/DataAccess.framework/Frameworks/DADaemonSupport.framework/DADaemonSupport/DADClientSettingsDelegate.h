@class DAOofParams;

@interface DADClientSettingsDelegate : DADClientDelegate <DASettingsResponseDelegate>

@property (nonatomic) BOOL isUpdate;
@property (retain, nonatomic) DAOofParams *requestParams;
@property (retain, nonatomic) DAOofParams *responseParams;

- (void)finishWithError:(id)a0;
- (void)disable;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isOofSupported;
- (void)settingsRequestFinishedWithResults:(id)a0 status:(long long)a1 error:(id)a2;
- (void)beginSettingsRequest;
- (id)initWithAccountID:(id)a0 requestDictionary:(id)a1 forUpdate:(BOOL)a2 client:(id)a3;

@end
