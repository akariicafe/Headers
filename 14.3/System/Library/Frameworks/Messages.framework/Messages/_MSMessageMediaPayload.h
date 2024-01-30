@class NSString, NSDictionary, UIImage, NSURL, NSData;

@interface _MSMessageMediaPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *mediaURL;
@property (copy, nonatomic) NSData *mediaData;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *mediaFilename;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (nonatomic) BOOL isSticker;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSticker:(id)a0;

@end
