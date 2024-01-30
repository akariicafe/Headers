@class NSString, NSArray;

@interface UIWebPDFSearchResult : NSObject

@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (retain, nonatomic) NSArray *strings;
@property (retain, nonatomic) NSArray *rects;
@property (retain, nonatomic) NSArray *rotationAngles;

- (void)dealloc;

@end
