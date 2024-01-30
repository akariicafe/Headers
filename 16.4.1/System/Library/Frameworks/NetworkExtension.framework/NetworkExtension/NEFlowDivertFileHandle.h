@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)initFromDictionary:(id)a0;
- (id)dictionary;
- (unsigned long long)type;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (id)initFlowDivertDataSocket;
- (id)initFlowDivertControlSocket;
- (id)description;
- (void).cxx_destruct;

@end
