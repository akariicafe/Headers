@class NSString, NSURL, NSData, UIImage;

@interface SFAirDropPayload : NSObject

@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) UIImage *previewImage;
@property (copy, nonatomic) NSString *payloadDescription;
@property (nonatomic) long long identifer;
@property (nonatomic) BOOL wasString;

+ (id)newPayloadWithData:(id)a0 ofType:(id)a1 description:(id)a2 previewImage:(id)a3 identifier:(long long)a4;
+ (id)newPayloadWithURL:(id)a0 description:(id)a1 previewImage:(id)a2 identifier:(long long)a3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
