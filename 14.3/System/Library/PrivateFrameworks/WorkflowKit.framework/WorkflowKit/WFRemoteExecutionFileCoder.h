@class NSString, WFRemoteExecutionCoordinator, NSURL, NSMutableArray;

@interface WFRemoteExecutionFileCoder : WFFileCoder

@property (retain, nonatomic) NSMutableArray *transferIdentifiers;
@property (copy, nonatomic) id /* block */ fileAvailabilityHandler;
@property (weak, nonatomic) WFRemoteExecutionCoordinator *coordinator;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSURL *fileURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)targetPlatform;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoordinator:(id)a0 requestIdentifier:(id)a1;
- (void)archiveFileAtURL:(id)a0 fileIsTemporary:(BOOL)a1 withCoder:(id)a2;
- (void)cancelOutstandingTransfers;
- (id)decodeFileWithCoder:(id)a0 fileIsTemporary:(BOOL *)a1;
- (void)fileAvailabilityChanged;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)a0;

@end
