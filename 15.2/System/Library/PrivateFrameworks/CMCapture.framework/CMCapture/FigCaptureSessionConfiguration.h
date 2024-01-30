@class NSArray, NSString, NSObject, NSMutableArray;
@protocol OS_tcc_identity;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSMutableArray *_connections;
}

@property (nonatomic) long long configurationID;
@property (readonly, nonatomic) NSArray *connectionConfigurations;
@property (readonly, nonatomic) NSArray *sourceConfigurations;
@property (readonly, nonatomic) NSArray *sinkConfigurations;
@property (retain, nonatomic) NSString *sessionPreset;
@property (nonatomic) BOOL usesAppAudioSession;
@property (nonatomic) BOOL configuresAppAudioSession;
@property (nonatomic) BOOL allowedToRunInMultitaskingMode;
@property (nonatomic, getter=isMultiCamSession) BOOL multiCamSession;
@property (nonatomic) BOOL xctestAuthorizedToStealDevice;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *tccIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)addConnectionConfiguration:(id)a0;
- (void)removeConnectionConfiguration:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
