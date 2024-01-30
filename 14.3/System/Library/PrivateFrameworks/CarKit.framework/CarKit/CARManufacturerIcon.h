@class NSData;

@interface CARManufacturerIcon : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic, getter=isPrerendered) BOOL prerendered;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
