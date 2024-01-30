@class NSString, NSFileManager, NSData, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WFShortcutPackageFile : NSObject

@property (readonly, nonatomic) NSString *sanitizedName;
@property (retain, nonatomic) NSData *shortcutData;
@property (retain, nonatomic) NSData *signedShortcutData;
@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSURL *signedShortcutFileURL;
@property (readonly, nonatomic) NSURL *temporaryWorkingDirectoryURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *directoryName;
@property (readonly, nonatomic) NSString *shortcutName;

- (void)commonInit;
- (void).cxx_destruct;
- (void)extractShortcutFileRepresentationWithCompletion:(id /* block */)a0;
- (id)extractShortcutFileRepresentationWithError:(id *)a0;
- (id)extractShortcutFileRepresentationWithSigningMethod:(long long *)a0 error:(id *)a1;
- (id)extractShortcutFileRepresentationWithSigningMethod:(long long *)a0 iCloudIdentifier:(id *)a1 error:(id *)a2;
- (id)generateDirectoryStructureInDirectory:(id)a0 error:(id *)a1;
- (id)generateSignedShortcutFileRepresentationWithAccount:(id)a0 error:(id *)a1;
- (id)generateSignedShortcutFileRepresentationWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 signingContext:(id)a1 error:(id *)a2;
- (id)initWithShortcutData:(id)a0 shortcutName:(id)a1;
- (id)initWithSignedShortcutData:(id)a0 shortcutName:(id)a1;
- (id)initWithSignedShortcutFileURL:(id)a0;
- (void)preformShortcutDataExtractionWithCompletion:(id /* block */)a0;

@end
