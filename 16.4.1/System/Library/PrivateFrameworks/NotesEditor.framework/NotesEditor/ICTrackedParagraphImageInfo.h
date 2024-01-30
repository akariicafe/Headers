@class NSString, ICTrackedParagraph, UIImage, UIImageView;

@interface ICTrackedParagraphImageInfo : NSObject

@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) UIImageView *imageViewIfExists;
@property (nonatomic) BOOL estimated;

- (void).cxx_destruct;

@end
