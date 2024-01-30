@class NSString, NSDictionary, NUAdjustmentSchema, NUIdentifier;

@interface NUAdjustment : NSObject <NUIdentifiable>

@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) NUAdjustmentSchema *schema;
@property (readonly, nonatomic) NUIdentifier *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithAdjustmentSchema:(id)a0;
- (BOOL)isEqualToAdjustment:(id)a0;

@end
