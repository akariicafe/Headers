@class NSData;

@interface _UIMappedBitmapImage : UIImage

@property (retain, nonatomic) NSData *data;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void)_preheatBitmapData;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)_configureImage:(id)a0 assumePreconfigured:(BOOL)a1;

@end
