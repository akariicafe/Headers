@class NSURL, NSDictionary;

@interface QLFileThumbnailRequest : NSObject

@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long badgeType;
@property (retain, nonatomic) NSDictionary *generationData;

- (void).cxx_destruct;
- (id)initWithMaximumSize:(struct CGSize { double x0; double x1; })a0 minimumSize:(double)a1 scale:(double)a2 badgeType:(unsigned long long)a3 fileURL:(id)a4 generationData:(id)a5;

@end
