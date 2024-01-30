@class NSMutableDictionary, NSMutableArray;

@interface AXAuditObjectTransportManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *_keyToTransportInfo;
@property (retain, nonatomic) NSMutableArray *_transportInfoEncodeOnly;
@property (nonatomic) BOOL enforceSecureTransport;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)_registerKnownClasses;
- (id)_transportInfoEncodeOnlyForObject:(id)a0;
- (id)_transportInfoForObject:(id)a0;
- (void)_validateTransportObjectIfNeeded:(id)a0;
- (id)arrayForTransportArray:(id)a0 expectedClass:(Class)a1;
- (id)objectForTransportDictionary:(id)a0 expectedClass:(Class)a1;
- (void)registerTransportInfoMasquerade:(id)a0 encodeOnly:(BOOL)a1;
- (void)registerTransportInfoPropertyBased:(id)a0;
- (void)registerTransportableClass:(Class)a0;
- (id)transportArrayForArray:(id)a0;
- (id)transportDictionaryForObject:(id)a0;
- (BOOL)validateSupportedConnectionSecureTransport:(id)a0;

@end
