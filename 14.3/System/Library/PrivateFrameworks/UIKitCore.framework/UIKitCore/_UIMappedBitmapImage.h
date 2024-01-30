@class NSData;

@interface _UIMappedBitmapImage : UIImage

@property (retain, nonatomic) NSData *data;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_preheatBitmapData;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_configureImage:(id)a0 assumePreconfigured:(BOOL)a1;

@end
