@class NSString, NSDictionary, NSSet, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface _MDIndexExtension : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *containerPath;
@property (retain, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSString *extensionID;
@property (nonatomic) BOOL entitlementVerified;
@property (readonly) BOOL isEnabled;
@property (readonly) BOOL isInternal;
@property (readonly) BOOL dontRunDuringMigration;
@property (readonly) NSDictionary *infoDictionary;
@property (copy) NSSet *identifiers;
@property (copy) NSSet *supportedFileTypes;

- (void).cxx_destruct;
- (void)performJob:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithExtension:(id)a0 queue:(id)a1 containerPath:(id)a2 containerID:(id)a3;
- (BOOL)_verifyIntegrityWithHostContext:(id)a0;
- (id)description;
- (id)initWithExtension:(id)a0 queue:(id)a1 containerPath:(id)a2 containerID:(id)a3 supportedFileTypes:(id)a4;
- (void)_performJob:(id)a0 completionBlock:(id /* block */)a1;

@end
