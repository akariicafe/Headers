@class NSDictionary;

@interface IDSTapToRadarContext : NSObject {
    NSDictionary *_rawContext;
}

- (BOOL)_isValidClassification:(id)a0;
- (BOOL)_isValidReproducibility:(id)a0;
- (id)initWithTitle:(id)a0 problemDescription:(id)a1;
- (id)getTapToRadarURL;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
