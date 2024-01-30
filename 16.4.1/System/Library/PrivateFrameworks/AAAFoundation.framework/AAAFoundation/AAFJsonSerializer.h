@interface AAFJsonSerializer : AAFDefaultSerializer

- (id)mediaTypes;
- (id)_dataFromDictionary:(id)a0 error:(out id *)a1;
- (id)_dictionaryFromObject:(id)a0 error:(out id *)a1;

@end
