@class NSString;
@protocol PXStoryVisualDiagnosticsProvider;

@interface PXStoryVisualDiagnosticsConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) id<PXStoryVisualDiagnosticsProvider> rootProvider;
@property (nonatomic) struct CGSize { double width; double height; } defaultPageSize;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isPrivateDataAllowed;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRootProvider:(id)a0;

@end
