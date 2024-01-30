@class NSString, WFFileLocation, NSURL, NSData;

@interface WFFileValue : NSObject <WFVariableSerialization>

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *cachedDisplayName;
@property (readonly, nonatomic) WFFileLocation *fileLocation;
@property (readonly, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBookmarkWithFileURL:(id)a0 workflowID:(id)a1;
+ (id)defaultValueWithWorkflowID:(id)a0;

- (id)initWithURL:(id)a0;
- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)resolveURLWithWorkflowID:(id)a0 error:(id *)a1;
- (id)initWithBookmarkData:(id)a0 filename:(id)a1 displayName:(id)a2;
- (id)initWithFileLocation:(id)a0 filename:(id)a1 displayName:(id)a2;
- (id)initWithFileLocation:(id)a0 filename:(id)a1 displayName:(id)a2 reloadDisplayName:(BOOL)a3;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithURL:(id)a0 workflowID:(id)a1;
- (BOOL)isSupportedOnCurrentDevice;

@end
