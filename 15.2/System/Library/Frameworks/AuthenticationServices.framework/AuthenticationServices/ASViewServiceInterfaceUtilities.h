@interface ASViewServiceInterfaceUtilities : NSObject

@property (class, readonly, nonatomic) struct CGColor { } *iconBorderColor;
@property (class, readonly, nonatomic) double iconBorderWidth;
@property (class, readonly, nonatomic) double cellIconCornerRadius;
@property (class, readonly, nonatomic) double headerIconCornerRadius;

+ (id)messageLabelColor;

@end
