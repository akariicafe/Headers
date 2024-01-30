@class NSString, NSMutableArray, VCImageAttributeRules;

@interface SDPMediaLine : NSObject

@property (nonatomic) unsigned int rtpId;
@property (readonly, nonatomic) BOOL allowRTCPFB;
@property (readonly, nonatomic) int rtcpPort;
@property (readonly, nonatomic) int rtpPort;
@property (readonly, nonatomic) NSMutableArray *attributes;
@property (readonly, nonatomic) NSMutableArray *payloads;
@property (retain, nonatomic) VCImageAttributeRules *imageAttributeRules;
@property (readonly, nonatomic) NSString *string;

+ (void)fillImageArray:(id)a0 imageArray:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a1;
+ (void)fillImageStruct:(id)a0 imageStruct:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a1;
+ (void)fillImageStructWithDictionary:(id)a0 forInterface:(int)a1 imageStruct:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a2;

- (void)addAttribute:(id)a0;
- (void)dealloc;
- (id)init;
- (void)parseAttribute:(id)a0;
- (void)parseMediaLine:(id)a0;
- (BOOL)supportImage:(id)a0 width:(int)a1 height:(int)a2 rate:(int)a3;
- (void)addImageAttributeRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 direction:(int)a3 attributeString:(id)a4;
- (void)addPayload:(int)a0 rtpMap:(id)a1 formatParameters:(id)a2;
- (void)addVideoImageAttr:(id)a0 ForPayload:(int)a1;
- (void)addWifiRules:(id)a0 cellularRules:(id)a1 payload:(int)a2 direction:(int)a3;
- (void)appendPayload:(int)a0 dimensions:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a1 direction:(int)a2 attributeString:(id)a3;
- (void)createVideoImageAttr:(int)a0 direction:(int)a1 dimensions:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a2 count:(int)a3;
- (id)getVideoRecvImages:(id)a0;
- (id)getVideoSendImages:(id)a0;
- (id)initWithParser:(id)a0 rtpPort:(int)a1 payloads:(id)a2;
- (void)parseImageAttributeRules:(id)a0;
- (BOOL)videoDisplayAttribute:(int *)a0 withHeight:(int *)a1;
- (id)videoImageAttributes:(int)a0;

@end
