@interface _NSItemProviderTypeCoercion : NSObject

@property (retain) id value;
@property (copy) Class targetClass;

+ (id)typeCoercionForValue:(id)a0 targetClass:(Class)a1;

- (void)dealloc;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)a0 error:(id *)a1;
- (id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)a0 error:(id *)a1;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)a0 error:(id *)a1;
- (id)coerceValueError:(id *)a0;
- (BOOL)shouldCoerceForCoding;

@end
