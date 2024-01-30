@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate>

@property (retain, nonatomic) NSDictionary *payloadAtom;
@property (retain) NSMutableDictionary *pendingCertificates;
@property (retain) NSDictionary *pluginUpgradeInfo;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)validatePayload;
- (BOOL)setPostprocessedPayloadContents:(id)a0;
- (BOOL)addCertificatePending:(id)a0 certificateTag:(id)a1 accessGroup:(id)a2;
- (BOOL)addCertificatePending:(id)a0 certificateTag:(id)a1;
- (id)getPreprocessedPayloadContents;

@end
