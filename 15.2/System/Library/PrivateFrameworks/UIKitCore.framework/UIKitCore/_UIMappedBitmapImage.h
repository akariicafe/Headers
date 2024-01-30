@class NSData;

@interface _UIMappedBitmapImage : UIImage

@property (retain, nonatomic) NSData *data;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)_configureImage:(id)a0 assumePreconfigured:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_preheatBitmapData;
- (unsigned long long)hash;

@end
