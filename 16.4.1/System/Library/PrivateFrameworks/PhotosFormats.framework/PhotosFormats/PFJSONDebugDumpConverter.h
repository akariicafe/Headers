@interface PFJSONDebugDumpConverter : NSObject

@property (copy) id /* block */ unknownTypeHandler;

- (void).cxx_destruct;
- (id)JSONForObject:(id)a0 error:(id *)a1;
- (id)JSONCompatibleObjectForObject:(id)a0;
- (id)initWithUnknownTypeHandler:(id /* block */)a0;
- (id)unknownObjectTypePlaceholderForObject:(id)a0;

@end
