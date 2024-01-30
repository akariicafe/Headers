@class NSMutableDictionary;

@interface CFPBJSONReader : NSObject {
    NSMutableDictionary *_objNamesToPropMaps;
    NSMutableDictionary *_propertyCache;
}

- (id)init;
- (void).cxx_destruct;
- (id)readFromJsonDictionary:(id)a0 usingMessageType:(Class)a1;

@end
