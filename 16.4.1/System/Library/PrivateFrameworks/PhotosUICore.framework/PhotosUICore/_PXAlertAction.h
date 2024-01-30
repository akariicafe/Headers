@class NSString;

@interface _PXAlertAction : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) id /* block */ action;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 action:(id /* block */)a2;

@end
