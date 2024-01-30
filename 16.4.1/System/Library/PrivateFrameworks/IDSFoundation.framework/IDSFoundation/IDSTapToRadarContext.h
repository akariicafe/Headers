@class NSDictionary;

@interface IDSTapToRadarContext : NSObject {
    NSDictionary *_rawContext;
}

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isValidClassification:(id)a0;
- (BOOL)_isValidReproducibility:(id)a0;
- (id)getTapToRadarURL;
- (id)initWithTitle:(id)a0 problemDescription:(id)a1;

@end
