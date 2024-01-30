@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate>

@property (retain, nonatomic) NSDictionary *payloadAtom;
@property (retain) NSMutableDictionary *pendingCertificates;
@property (retain) NSDictionary *pluginUpgradeInfo;

- (id)validatePayload;
- (void).cxx_destruct;
- (id)getPreprocessedPayloadContents;
- (BOOL)setPostprocessedPayloadContents:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)addCertificatePending:(id)a0 certificateTag:(id)a1 accessGroup:(id)a2;
- (BOOL)addCertificatePending:(id)a0 certificateTag:(id)a1;
- (id)initWithPayload:(id)a0;

@end
