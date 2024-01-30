@class NSString, NSDictionary;

@interface SSDialogButton : NSObject {
    NSDictionary *_actionDictionary;
    NSString *_title;
}

@property (readonly, nonatomic) id actionParameter;
@property (readonly, nonatomic) NSString *buttonAction;
@property (readonly, nonatomic) NSString *URLTarget;
@property (readonly, copy, nonatomic) NSString *buttonTitle;

+ (id)buttonWithTitle:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithTitle:(id)a0 actionDictionary:(id)a1;
- (id)valueForActionProperty:(id)a0;

@end
