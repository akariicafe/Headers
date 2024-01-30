@interface PPMClientUserClientInterface : NSObject

@property (readonly) BOOL attribute;
@property (readonly) unsigned int connect;

- (int)pushTelemetry:(unsigned int)a0 userDictRef:(struct UserClientTelemetryDict { unsigned int x0; unsigned int x1; char x2[20][128]; int x3[20]; } *)a1;
- (int)startActivity:(unsigned int)a0 clientNumber:(unsigned int)a1 level:(int)a2;
- (int)stopActivity:(unsigned int)a0 clientNumber:(unsigned int)a1 level:(int)a2;
- (int)setDebugFlag:(unsigned int)a0 value:(unsigned int)a1;
- (int)setBudget:(unsigned int)a0 clientNumber:(unsigned int)a1 value:(unsigned int)a2;
- (int)openPPMUserClient:(unsigned int)a0 clientNumber:(int)a1;
- (int)admissionCheckOfValuePPM:(unsigned int)a0 clientNumber:(unsigned int)a1 level:(int)a2 result:(unsigned int *)a3;

@end
