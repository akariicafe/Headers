@class NSString, UIColor;

@interface AAUIiCloudMediaUsageInfo : NSObject

@property (retain, nonatomic) NSString *mediaType;
@property (retain, nonatomic) UIColor *representativeColor;
@property (nonatomic) float bytesUsed;
@property (retain, nonatomic) NSString *displayLabel;

- (void).cxx_destruct;
- (id)capacityBarCatagory;
- (id)initWithMediaType:(id)a0 representativeColor:(id)a1 bytesUsed:(float)a2;

@end
