@interface MUPlaceVerticalCardConfiguration : NSObject

@property (nonatomic) BOOL showSeparators;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } bottomSeparatorInset;

+ (id)separatorConfiguration;
+ (id)plainConfiguration;

@end
