@class NSArray, NSMutableDictionary;

@interface AUParameterGroup : AUParameterNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *childIndicesByIdentifier;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSArray *allParameters;

- (BOOL)isGroup;
- (void).cxx_destruct;
- (id)copyNodeWithOffset:(unsigned long long)a0;
- (void)_observersChanged:(BOOL)a0 deltaCount:(int)a1;
- (void)_deserialize:(struct CADeserializer { struct __CFData *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a0 fromSetFullState:(BOOL)a1;
- (id)initWithChildren:(id)a0;
- (id)initWithID:(id)a0 name:(id)a1 children:(id)a2;
- (void)_indexChildren;
- (id)initWithTemplate:(id)a0 identifier:(id)a1 name:(id)a2 addressOffset:(unsigned long long)a3;
- (void)dealloc;
- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_serialize:(struct CASerializer { struct __CFData *x0; } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
