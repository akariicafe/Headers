@interface _AFDataStoreEntry : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id value;

- (id)_propertyListStringForType;
- (long long)_typeForPropertyListString:(id)a0;
- (id)initWithType:(long long)a0 value:(id)a1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)a0 error:(id *)a1;
- (id)_valuePropertyListRepresentation;
- (id)_valueForPropertyListRepresentation:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
