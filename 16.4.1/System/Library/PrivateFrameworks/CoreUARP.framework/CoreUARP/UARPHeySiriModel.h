@class NSArray, NSURL, NSMutableArray;

@interface UARPHeySiriModel : NSObject {
    NSURL *_url;
    NSMutableArray *_newModels;
    NSMutableArray *_fallbackModels;
    NSMutableArray *_downloadedModels;
    NSMutableArray *_preInstalledModels;
}

@property (readonly, copy) NSArray *newModels;
@property (readonly, copy) NSArray *fallbackModels;
@property (readonly, copy) NSArray *downloadedModels;
@property (readonly, copy) NSArray *preInstalledModels;
@property (readonly) unsigned long long engineType;
@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;

+ (id)hsModelWithUarpPayload:(id)a0;
+ (id)uarpPayloadWithHSModel:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)addHeySiriDownloadedModel:(id)a0;
- (void)addHeySiriFallbackModel:(id)a0;
- (void)addHeySiriPreinstalledModel:(id)a0;
- (void)addHeySiriPrimaryModel:(id)a0;
- (void)expandSuperBinaryMetaData:(id)a0;
- (void)expandSuperBinaryPayloads:(id)a0;
- (BOOL)expandURL:(id *)a0;
- (id)exportAsSuperBinary:(id *)a0;

@end
