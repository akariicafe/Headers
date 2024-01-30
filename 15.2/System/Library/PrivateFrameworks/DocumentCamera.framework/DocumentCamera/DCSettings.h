@class NSUserDefaults;

@interface DCSettings : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL enableViewService;
@property (readonly, nonatomic) BOOL finishAfterFirstScan;
@property (readonly, nonatomic) BOOL useDocumentSegmentationRequest;

+ (id)sharedSettings;

- (void).cxx_destruct;
- (id)init;
- (id)enableViewServiceBoxed;
- (void)setEnableViewServiceBoxed:(id)a0;
- (id)finishAfterFirstScanBoxed;
- (void)setFinishAfterFirstScanBoxed:(id)a0;
- (id)useDocumentSegmentationRequestBoxed;
- (void)setUseDocumentSegmentationRequestBoxed:(id)a0;

@end
