@class NSDictionary;

@interface IDSTapToRadarContext : NSObject {
    NSDictionary *_rawContext;
}

- (void).cxx_destruct;
- (BOOL)_isValidClassification:(id)a0;
- (BOOL)_isValidReproducibility:(id)a0;
- (id)initWithTitle:(id)a0 problemDescription:(id)a1;
- (id)getTapToRadarURL;
- (id)initWithDictionary:(id)a0;

@end
