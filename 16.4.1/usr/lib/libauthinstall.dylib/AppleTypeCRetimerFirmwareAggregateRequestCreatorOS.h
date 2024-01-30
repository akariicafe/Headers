@class NSArray, NSDictionary, FTABFileOS, FTABSubfileOS;

@interface AppleTypeCRetimerFirmwareAggregateRequestCreatorOS : AppleTypeCRetimerRestoreInfoHelperOS {
    FTABFileOS *_ftab;
    FTABSubfileOS *_rkos;
    FTABSubfileOS *_rrko;
    NSArray *_deviceInfoArray;
    NSDictionary *_apParameters;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (id)generateHashForSubfile:(id)a0;
- (BOOL)generateRequestDictionary;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)parseOptions:(id)a0;

@end
