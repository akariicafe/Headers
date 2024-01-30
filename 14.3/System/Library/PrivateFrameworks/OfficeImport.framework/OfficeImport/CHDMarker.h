@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (id)init;
- (void).cxx_destruct;
- (int)style;
- (unsigned int)size;
- (id)description;
- (void)setSize:(unsigned int)a0;
- (void)setStyle:(int)a0;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
