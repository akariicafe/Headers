@class NSDictionary;

@interface RAWTIFFIFDTable : NSObject

@property (copy) id /* block */ mValueBlock;
@property (retain) NSDictionary *mNamespace;
@property (retain) NSDictionary *mNamespaceReverse;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithValueBlock:(id /* block */)a0 forwardNamespace:(id)a1 reverseNamespace:(id)a2;

@end
