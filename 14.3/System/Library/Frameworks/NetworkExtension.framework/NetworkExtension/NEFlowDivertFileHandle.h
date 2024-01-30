@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initFlowDivertControlSocket;
- (id)initFromDictionary:(id)a0;
- (id)initFlowDivertDataSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (id)description;
- (unsigned long long)type;
- (id)getUnitForSocket:(int)a0;

@end
