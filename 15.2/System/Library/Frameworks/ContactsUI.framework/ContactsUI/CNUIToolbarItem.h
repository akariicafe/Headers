@class NSString;

@interface CNUIToolbarItem : NSObject

@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isCancel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
