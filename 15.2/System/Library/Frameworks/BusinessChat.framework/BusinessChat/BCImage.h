@class NSString, NSDictionary, NSData, UIImage;

@interface BCImage : NSObject {
    NSData *_imageData;
    NSString *_identifier;
    NSString *_imageDescription;
}

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *imageDescription;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)initWithImageData:(id)a0 identifier:(id)a1 description:(id)a2;

@end
