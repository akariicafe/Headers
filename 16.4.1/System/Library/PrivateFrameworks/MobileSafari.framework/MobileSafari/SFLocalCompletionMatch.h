@class NSString;

@interface SFLocalCompletionMatch : WBSURLCompletionMatch

@property (readonly, copy, nonatomic) NSString *originalURLString;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) long long matchLocation;

- (void).cxx_destruct;
- (id)initWithCompletionMatch:(id)a0;

@end
