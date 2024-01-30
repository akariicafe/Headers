@class OADGraphicProperties;

@interface CHDMarker : NSObject {
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (void)setSize:(unsigned int)a0;
- (id)init;
- (unsigned int)size;
- (id)description;
- (int)style;
- (void).cxx_destruct;
- (void)setStyle:(int)a0;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;

@end
