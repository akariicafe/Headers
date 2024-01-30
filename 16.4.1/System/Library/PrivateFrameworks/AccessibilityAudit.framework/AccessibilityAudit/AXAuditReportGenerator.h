@class NSString, NSMutableArray;

@interface AXAuditReportGenerator : NSObject

@property (retain, nonatomic) NSMutableArray *_issues;
@property (copy, nonatomic) NSString *deviceName;

- (id)init;
- (void).cxx_destruct;
- (id)_jsonData;
- (id)_jsonString;
- (id)_josnDictionary;
- (id)_anyAuditIssueFromResults:(id)a0;
- (id)_defaultSavePath;
- (id)_fileExtensionForReportType:(long long)a0;
- (id)_fullOutputPathForReportType:(long long)a0 outputPath:(id)a1 outputFilename:(id)a2;
- (id)_generateHTMLSourceFromTemplates;
- (id)_htmlTemplate;
- (id)_htmlTemplatePath;
- (id)_jsonArrayForIssues:(id)a0;
- (id)_jsonArrayForScreens;
- (id)_jsonDictionaryForAuditIssueImage:(id)a0 thumbnailOnly:(BOOL)a1;
- (id)_jsonDictionaryForIssue:(id)a0;
- (id)_locStringForKey:(id)a0;
- (void)_processScreenshotsForAXAuditResult:(id)a0 completion:(id /* block */)a1;
- (void)appendIssues:(id)a0;
- (id)generateReportType:(long long)a0 outputPath:(id)a1 outputFilename:(id)a2 error:(id *)a3;
- (void)generateXCTestReportType:(long long)a0 forAuditResult:(id)a1 completion:(id /* block */)a2;
- (id)imageDataForIssue:(id)a0 thumbnailOnly:(BOOL)a1;
- (id)reportHeaderForIssues:(id)a0;
- (id)textDescriptionForIssues:(id)a0;

@end
