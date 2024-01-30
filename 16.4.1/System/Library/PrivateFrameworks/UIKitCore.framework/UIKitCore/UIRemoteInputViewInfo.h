@class RTIInputViewInfo;

@interface UIRemoteInputViewInfo : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) int processId;
@property (nonatomic) unsigned int contextId;
@property (readonly, nonatomic) RTIInputViewInfo *rtiInputViewInfo;

- (id)description;

@end
