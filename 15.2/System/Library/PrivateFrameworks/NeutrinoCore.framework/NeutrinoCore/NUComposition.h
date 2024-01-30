@class NSString, NSDictionary, NUCompositionSchema, NUIdentifier;

@interface NUComposition : NSObject <NUIdentifiable>

@property (readonly, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NUCompositionSchema *schema;
@property (nonatomic) long long mediaType;
@property (readonly, nonatomic) NUIdentifier *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithCompositionSchema:(id)a0;
- (BOOL)isEqualToComposition:(id)a0;

@end
