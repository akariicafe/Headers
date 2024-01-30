@class NSString;

@interface FPUIAuthenticationRowDescriptor : NSObject <NSCopying>

@property (nonatomic) double rowHeight;
@property (nonatomic) double shouldHighlight;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (copy, nonatomic) id /* block */ accessoryButtonTapHandler;
@property (copy, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *cellReuseIdentifier;
@property (copy, nonatomic) id /* block */ cellCustomizationHandler;
@property (copy, nonatomic) id /* block */ cellWillDisplayHandler;
@property (nonatomic) long long cellSelectionStyle;

+ (Class)defaultCellClass;
+ (id)defaultCellReuseIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
