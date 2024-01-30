@class NSString;

@interface WFSelectableListOption : NSObject

@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) id value;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void).cxx_destruct;
- (id)initWithDisplayTitle:(id)a0 value:(id)a1;

@end
