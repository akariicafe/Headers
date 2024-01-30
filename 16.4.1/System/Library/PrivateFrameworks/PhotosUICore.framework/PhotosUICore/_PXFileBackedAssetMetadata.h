@class CLLocation, NSDate;

@interface _PXFileBackedAssetMetadata : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) CLLocation *location;

- (void).cxx_destruct;

@end
