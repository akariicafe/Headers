@class NSString, NSSet, NSData, NSArray, SFAirDropClassroomTransferManager;

@interface CRKConcreteSharingAirDropTransfer : NSObject <SFAirDropClassroomTransferDelegate, CRKSharingAirDropTransfer>

@property (readonly, nonatomic) BOOL autoAccept;
@property (readonly, nonatomic) BOOL hideProgress;
@property (readonly, copy, nonatomic) NSString *senderName;
@property (readonly, copy, nonatomic) NSData *previewImageData;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *sourceBundleID;
@property (readonly, copy, nonatomic) NSString *itemsDescription;
@property (readonly, nonatomic) id /* block */ resultHandler;
@property (readonly, nonatomic) SFAirDropClassroomTransferManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSSet *fileURLs;
@property (copy, nonatomic) NSArray *destFileURLs;

+ (id)UTIForURL:(id)a0;
+ (id)infoForFileURL:(id)a0;
+ (long long)transferStateForState:(long long)a0;

- (void)transferWithIdentifierWasDeclined:(id)a0 withFailureReason:(unsigned long long)a1;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)transferWithIdentifierWasAccepted:(id)a0;
- (void)transferWithIdentifierWasDeclined:(id)a0;
- (id)initWithAutoAccept:(BOOL)a0 hideProgress:(BOOL)a1 senderName:(id)a2 previewImageData:(id)a3 bundleID:(id)a4 sourceBundleID:(id)a5 itemsDescription:(id)a6 fileURLs:(id)a7 resultHandler:(id /* block */)a8;
- (void)propagateResultForIdentifier:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (id)transferInfoDictionary;
- (void)updateWithState:(long long)a0 completion:(id /* block */)a1;

@end
