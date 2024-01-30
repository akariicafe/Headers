@class TIKeyboardTouchEvent;

@interface TIKBSessionTouchInfo : NSObject

@property (retain, nonatomic) TIKeyboardTouchEvent *touch;
@property (nonatomic) unsigned long long layoutId;

- (void).cxx_destruct;

@end
