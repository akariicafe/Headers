@class NSString, NSArray, NSMutableDictionary, NSMutableArray;
@protocol AFUIBugReportingDelegate;

@interface AFUITapToRadarManager : NSObject <AFUIBugReporting>

@property (copy, nonatomic, getter=_hostname) NSString *hostname;
@property (copy, nonatomic, getter=_lastUserText) NSString *lastUserText;
@property (copy, nonatomic, getter=_siriLanguage) NSString *siriLanguage;
@property (copy, nonatomic, getter=_contextCollectorsInfo) NSArray *contextCollectorsInfo;
@property (retain, nonatomic, getter=_tapToRadarParameters) NSMutableDictionary *tapToRadarParameters;
@property (retain, nonatomic, getter=_attachmentPaths) NSMutableArray *attachmentPaths;
@property (weak, nonatomic) id<AFUIBugReportingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setDescription:(id)a0;
- (unsigned long long)maximumAttachmentSize;
- (void)_setDefaultParameterValues:(id)a0;
- (void)attachData:(id)a0 name:(id)a1 mimeType:(id)a2;
- (void)attachFileAtPath:(id)a0 image:(BOOL)a1;
- (BOOL)canReportBugs;
- (void)composeBugReport:(id)a0;
- (void)setComponentName:(id)a0 componentVersion:(id)a1 componentID:(id)a2;
- (void)setIncludeSysdiagnosesFromDevices:(id)a0;
- (void)setKeywordIdentifiers:(id)a0;

@end
