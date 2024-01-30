@interface _HKXMLValidator : NSObject {
    struct _xmlSchema { } *_xsdSchema;
}

+ (id)validatorWithPathToXSD:(id)a0;
+ (id)validatorWithXSD:(id)a0;

- (void)dealloc;
- (id)_initWithSchema:(struct _xmlSchema { } *)a0;
- (BOOL)validateXML:(id)a0 simpleError:(id *)a1 detailedErrors:(id *)a2;

@end
