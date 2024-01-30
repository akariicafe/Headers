@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (int)style;
- (unsigned int)size;
- (id)description;
- (void)setStyle:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setSize:(unsigned int)a0;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
