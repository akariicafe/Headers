@class NSArray, UITableViewDiffableDataSource, NSDiffableDataSourceSnapshot, NSMutableSet, NSString, UITableView;

@interface CACLanguageSelectionViewController : UIViewController <UITableViewDelegate, CACLanguageDownloadTableViewCellDownloadDelegate>

@property (nonatomic) unsigned long long controllerStyle;
@property (retain, nonatomic) NSArray *availableLocales;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSMutableSet *languagesWithDisabledInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultControllerWithStyle:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)updateSnapshot;
- (void)setupDataSource;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)createSnapshot;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismiss;
- (void)viewDidLoad;
- (void)updateDownloadProgress;
- (void)cacLanguageDownloadStartDownload:(id)a0;
- (void)cacLanguageDownloadStopDownload:(id)a0;
- (void)handleDownloadProgressChange;
- (void)handleErrorOccured:(id)a0;
- (void)presentConfirmationForLanguageIdentifier:(id)a0;
- (void)cancelDownloadForLanguageWithIdentifier:(id)a0;
- (void)startDownloadForLanguageWithIdentifier:(id)a0;
- (void)setDownloadingLanguageCellsEnabled:(BOOL)a0;
- (void)languageDidChange;

@end
