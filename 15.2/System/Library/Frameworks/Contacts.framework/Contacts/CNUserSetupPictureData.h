@class NSData;

@interface CNUserSetupPictureData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) NSData *memojiMetadata;

+ (id)userSetupPictureDataFromData:(id)a0;
+ (id)log;

- (void)encodeWithCoder:(id)a0;
- (id)initWithImageData:(id)a0 thumbnailImageData:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 memojiMetadata:(id)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
