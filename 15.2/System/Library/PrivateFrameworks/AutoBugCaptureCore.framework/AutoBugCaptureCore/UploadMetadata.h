@class NSURL, NSString;

@interface UploadMetadata : NSObject

@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long httpStatusCode;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) long long errorCode;
@property (nonatomic) short taskState;
@property (nonatomic) short observedPrimaryInterfaceOnCompletion;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;

@end
