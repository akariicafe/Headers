@class NSArray, NSDictionary, NSString;

@interface AXAuditResult : NSObject <AXAuditTransportableObjectProtocol>

@property (retain, nonatomic) NSArray *auditIssues;
@property (retain, nonatomic) NSDictionary *auditIssueToScreenshotMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAXAuditCategoryResults:(id)a0;
- (id)shouldFlipOutlineForAuditIssue:(id)a0;
- (void)_generateIssueToImageMapping;
- (id)borderFrameForAuditIssue:(id)a0;
- (id)displayBoundsForAuditIssue:(id)a0;
- (id)initWithAuditIssues:(id)a0;
- (id)rotationForAuditIssue:(id)a0;
- (id)scaleForAuditIssue:(id)a0;
- (id)screenshotForAuditIssue:(id)a0;
- (id)screenshotInfoDictionaryForAuditIssue:(id)a0;

@end
