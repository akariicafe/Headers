@class NSString;

@interface HUGridCellBackgroundDisplayOptions : NSObject <HUGridDisplayOptions, NSCopying>

@property (nonatomic) unsigned long long displayStyle;
@property (readonly, nonatomic) double gutter;
@property (nonatomic) unsigned long long contentColorStyle;
@property (nonatomic) NSString *contentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
