@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)getUnitForSocket:(int)a0;
- (id)initFromDictionary:(id)a0;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initFlowDivertControlSocket;
- (unsigned long long)type;
- (id)dictionary;
- (id)initFlowDivertDataSocket;

@end
