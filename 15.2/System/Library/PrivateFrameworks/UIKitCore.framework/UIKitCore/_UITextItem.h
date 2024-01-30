@class NSArray, NSTextAttachment, NSURL, NSString;
@protocol UICoordinateSpace;

@interface _UITextItem : NSObject <UITextItem>

@property (retain, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (retain, nonatomic) NSArray *rects;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSURL *link;
@property (retain, nonatomic) NSTextAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
