@interface CFPBJSONWriter : NSObject

- (id)writeToJsonDictionary:(id)a0;
- (void)_traverseDictionary:(id)a0;
- (void)_traverseOther:(id)a0;

@end
