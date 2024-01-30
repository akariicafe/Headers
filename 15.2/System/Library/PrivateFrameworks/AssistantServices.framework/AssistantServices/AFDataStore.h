@class NSMutableDictionary;

@interface AFDataStore : NSObject {
    NSMutableDictionary *_entries;
}

- (id)initWithEntries:(id)a0;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (void)setImageData:(id)a0 forKey:(id)a1;
- (id)imageDataForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
