@class NSString;

@interface IKAppKeyboardHint : NSObject

@property (readonly, copy, nonatomic) NSString *badge;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *searchTerm;

- (void).cxx_destruct;
- (id)initWithBadge:(id)a0 text:(id)a1 searchTerm:(id)a2;

@end
