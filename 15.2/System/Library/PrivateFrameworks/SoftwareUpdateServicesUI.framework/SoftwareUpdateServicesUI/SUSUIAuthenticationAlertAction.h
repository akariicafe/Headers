@class SUAutoInstallOperation, SUDownload;

@interface SUSUIAuthenticationAlertAction : BSAction {
    BOOL _loaded;
    SUDownload *_download;
    SUAutoInstallOperation *_autoInstallOperation;
    BOOL _forInstallTonight;
    BOOL _canDeferInstallation;
}

@property (readonly, retain, nonatomic) SUDownload *download;
@property (readonly, retain, nonatomic) SUAutoInstallOperation *autoInstallOperation;
@property (readonly, nonatomic) BOOL forInstallTonight;
@property (readonly, nonatomic) BOOL canDeferInstallation;

- (void).cxx_destruct;
- (void)_loadIfNecessary;
- (void)fireCompletionIfNecessaryForResult:(BOOL)a0;
- (id)initWithDownload:(id)a0 autoInstallOperation:(id)a1 forInstallTonight:(BOOL)a2 canDeferInstallation:(BOOL)a3 completionQueue:(id)a4 completionBlock:(id /* block */)a5;

@end
