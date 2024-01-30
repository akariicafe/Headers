@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *supportedSizes;
@property (nonatomic) BOOL hasMaxSupportedSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSupportedSize;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
