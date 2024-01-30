@class NSString;

@interface MFPopupButtonItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;

+ (id)itemWithTitle:(id)a0;
+ (id)itemWithTitle:(id)a0 style:(long long)a1;

- (void).cxx_destruct;
- (id)copy;
- (BOOL)isEqual:(id)a0;

@end
