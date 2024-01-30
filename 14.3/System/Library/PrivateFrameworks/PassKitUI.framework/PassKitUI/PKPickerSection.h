@class NSString, NSMutableArray;

@interface PKPickerSection : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footer;
@property (readonly, copy, nonatomic) NSMutableArray *items;

+ (id)sectionWithTitle:(id)a0 footer:(id)a1;
+ (id)sectionWithTitle:(id)a0;

- (void).cxx_destruct;

@end
