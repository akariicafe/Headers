@class NSDictionary;

@interface MUPlaceEnrichmentAction : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *enrichmentAction;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) unsigned long long mkActionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActionType:(unsigned long long)a0 isValidated:(BOOL)a1 mkActionType:(unsigned long long)a2;
- (id)initWithActionType:(unsigned long long)a0 isValidated:(BOOL)a1 mkActionType:(unsigned long long)a2 metadata:(id)a3;

@end
