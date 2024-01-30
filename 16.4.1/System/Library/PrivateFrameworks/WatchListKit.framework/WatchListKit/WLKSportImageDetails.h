@class NSString;

@interface WLKSportImageDetails : NSObject

@property (readonly, nonatomic) BOOL disableGradient;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) BOOL isP3;
@property (readonly, copy, nonatomic) NSString *joeColor;
@property (readonly, nonatomic) BOOL supportsLayeredImage;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) long long width;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
