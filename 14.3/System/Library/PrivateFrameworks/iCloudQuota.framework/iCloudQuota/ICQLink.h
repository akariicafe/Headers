@class NSString, NSDictionary, NSURL;

@interface ICQLink : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSURL *remoteUIURL;

+ (id)linkWithText:(id)a0 options:(long long)a1 action:(long long)a2 parameters:(id)a3;
+ (BOOL)performAction:(long long)a0 parameters:(id)a1 options:(long long)a2;
+ (id)linkWithText:(id)a0 action:(long long)a1 parameters:(id)a2;

- (BOOL)performAction;
- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithText:(id)a0 options:(long long)a1 action:(long long)a2 parameters:(id)a3;
- (id)initWithText:(id)a0 action:(long long)a1 parameters:(id)a2;
- (BOOL)performActionWithOptions:(long long)a0;

@end
