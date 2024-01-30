@class NSURL;

@interface SXOEmbedPhotoResponse : SXOEmbedResponse

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

@end
