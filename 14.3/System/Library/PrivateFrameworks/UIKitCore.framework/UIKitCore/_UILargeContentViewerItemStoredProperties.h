@class NSString, UIImage;

@interface _UILargeContentViewerItemStoredProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL didSetShowsLargeContentViewer;
@property (nonatomic) BOOL showsLargeContentViewer;
@property (nonatomic) BOOL didSetLargeContentTitle;
@property (copy, nonatomic) NSString *largeContentTitle;
@property (nonatomic) BOOL didSetLargeContentImage;
@property (retain, nonatomic) UIImage *largeContentImage;
@property (nonatomic) BOOL didSetScalesLargeContentImage;
@property (nonatomic) BOOL scalesLargeContentImage;
@property (nonatomic) BOOL didSetLargeContentImageInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } largeContentImageInsets;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
