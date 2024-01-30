@class NSArray;

@interface AAFDefaultSerializer : NSObject <AAFSerializer>

@property (readonly) NSArray *mediaTypes;

- (id)stringFromData:(id)a0;
- (id)_className;
- (id)stringFromDictionary:(id)a0;
- (id)_dataFromDictionary:(id)a0 error:(out id *)a1;
- (id)_dictionaryFromObject:(id)a0 error:(out id *)a1;
- (void)_raiseException:(id)a0;
- (id)dataFromDictionary:(id)a0;
- (id)dataFromDictionary:(id)a0 error:(out id *)a1;
- (id)dictionaryFromObject:(id)a0;
- (id)dictionaryFromObject:(id)a0 error:(out id *)a1;

@end
