@class NSArray, NSString, NSNumber;
@protocol SAUITemplateItem;

@interface SAUITemplateTabularData : SAUITemplateBaseItem

@property (nonatomic) BOOL allowContentScrolling;
@property (copy, nonatomic) NSArray *columns;
@property (retain, nonatomic) id<SAUITemplateItem> footerItem;
@property (retain, nonatomic) id<SAUITemplateItem> headerItem;
@property (copy, nonatomic) NSString *layoutStyle;
@property (copy, nonatomic) NSNumber *minimumRowHeight;
@property (copy, nonatomic) NSArray *rowStyleRules;
@property (nonatomic) BOOL showHeaderDivider;

+ (id)tabularData;
+ (id)tabularDataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
