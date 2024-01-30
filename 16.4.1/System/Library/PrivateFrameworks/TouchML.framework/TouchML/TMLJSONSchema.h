@class NSDictionary;

@interface TMLJSONSchema : NSObject {
    NSDictionary *_schema;
}

- (id)initWithString:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)propertyForKeyPath:(id)a0;

@end
