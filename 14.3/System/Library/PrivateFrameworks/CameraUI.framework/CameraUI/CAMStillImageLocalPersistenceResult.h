@class NSError, NSString, NSDictionary, NSURL, NSDate, NSData, CAMStillImageCaptureResult;

@interface CAMStillImageLocalPersistenceResult : NSObject

@property (readonly, nonatomic) CAMStillImageCaptureResult *captureResult;
@property (readonly, copy, nonatomic) NSURL *localDestinationURL;
@property (readonly, copy, nonatomic) NSURL *linkedDestinationURL;
@property (readonly, copy, nonatomic) NSURL *localAdjustmentsURL;
@property (readonly, copy, nonatomic) NSString *localDiagnosticsPath;
@property (readonly, copy, nonatomic) NSString *localFilteredPreviewPath;
@property (readonly, copy, nonatomic) NSString *localPersistenceUUID;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSData *adjustmentsData;
@property (readonly, copy, nonatomic) NSURL *localPrivateMetadataFileURL;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithCaptureResult:(id)a0 atURL:(id)a1 linkedURL:(id)a2 localAdjustmentsURL:(id)a3 diagnosticsPath:(id)a4 filteredPreviewPath:(id)a5 withUUID:(id)a6 creationDate:(id)a7 uniformTypeIdentifier:(id)a8 orientation:(long long)a9 metadata:(id)a10 adjustmentsData:(id)a11 localPrivateMetadataFileURL:(id)a12 error:(id)a13;

@end
