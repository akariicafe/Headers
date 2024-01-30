@interface IKDOMSchema : NSObject {
    struct _xmlSchema { } *_schemaPtr;
}

- (void)dealloc;
- (id)initWithSchemaData:(id)a0;
- (BOOL)validateDocument:(id)a0 error:(id *)a1;

@end
