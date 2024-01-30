@class NSString, NSNumber;

@interface CAMControlDrawerMenuItem : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *selectedTitle;
@property (readonly, nonatomic) NSNumber *value;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 value:(id)a1;
- (id)initWithTitle:(id)a0 selectedTitle:(id)a1 value:(id)a2;

@end
