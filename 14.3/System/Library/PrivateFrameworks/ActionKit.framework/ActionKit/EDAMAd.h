@class NSNumber, NSString, NSData;

@interface EDAMAd : FATObject

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSString *advertiserName;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *destinationUrl;
@property (retain, nonatomic) NSNumber *displaySeconds;
@property (retain, nonatomic) NSNumber *score;
@property (retain, nonatomic) NSData *image;
@property (retain, nonatomic) NSString *imageMime;
@property (retain, nonatomic) NSString *html;
@property (retain, nonatomic) NSNumber *displayFrequency;
@property (retain, nonatomic) NSNumber *openInTrunk;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
