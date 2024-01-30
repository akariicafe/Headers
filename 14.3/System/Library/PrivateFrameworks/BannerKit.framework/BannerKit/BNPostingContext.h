@class NSUUID, NSDictionary;
@protocol BNPresentable;

@interface BNPostingContext : NSObject

@property (readonly, copy, nonatomic) NSUUID *pendingIdentifier;
@property (readonly, nonatomic) id<BNPresentable> presentable;
@property (readonly, nonatomic) unsigned long long presentationOptions;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithPresentable:(id)a0 presentationOptions:(unsigned long long)a1 userInfo:(id)a2;

@end
