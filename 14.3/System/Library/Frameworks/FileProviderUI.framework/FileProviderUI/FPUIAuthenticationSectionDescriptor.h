@class NSString;

@interface FPUIAuthenticationSectionDescriptor : NSObject

@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) BOOL shouldHighlightRows;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) Class headerViewClass;
@property (copy, nonatomic) NSString *headerViewReuseIdentifier;
@property (copy, nonatomic) id /* block */ headerViewCustomizationBlock;
@property (copy, nonatomic) NSString *footerTitle;
@property (copy, nonatomic) Class footerViewClass;
@property (copy, nonatomic) NSString *footerViewReuseIdentifier;
@property (copy, nonatomic) id /* block */ footerViewCustomizationBlock;
@property (copy, nonatomic) Class rowCellClass;
@property (copy, nonatomic) NSString *rowCellReuseIdentifier;
@property (nonatomic, getter=isActive) BOOL active;

- (id)init;
- (void).cxx_destruct;

@end
