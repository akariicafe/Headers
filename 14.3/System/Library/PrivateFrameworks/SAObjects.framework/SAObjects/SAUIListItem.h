@class NSArray, NSString;
@protocol SAAceSerializable;

@interface SAUIListItem : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelValue;
@property (retain, nonatomic) id<SAAceSerializable> object;
@property (copy, nonatomic) NSString *selectionResponse;
@property (copy, nonatomic) NSString *selectionText;
@property (copy, nonatomic) NSString *speakableSelectionResponse;
@property (copy, nonatomic) NSString *title;

+ (id)listItem;
+ (id)listItemWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
