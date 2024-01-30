@class NSString, NSDictionary, NSData;

@interface SFImage : NSObject <SFImage, NSSecureCoding, NSCopying> {
    struct { unsigned char isTemplate : 1; unsigned char shouldCropToCircle : 1; unsigned char cornerRadius : 1; unsigned char scale : 1; unsigned char size : 1; unsigned char source : 1; unsigned char cornerRoundingStyle : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *imageData;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL shouldCropToCircle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic) int cornerRoundingStyle;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) SFImage *badgingImage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageWithData:(id)a0;

- (BOOL)hasSource;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasSize;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasScale;
- (void)loadImageDataWithCompletionAndErrorHandler:(id /* block */)a0;
- (void)loadImageDataWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasCornerRadius;
- (BOOL)hasCornerRoundingStyle;
- (BOOL)hasIsTemplate;
- (BOOL)hasShouldCropToCircle;
- (void)loadImageDataWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
