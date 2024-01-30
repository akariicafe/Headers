@class NSString;

@interface WBSQuerySuggestion : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id tag;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 identifier:(id)a1 type:(long long)a2 tag:(id)a3;

@end
