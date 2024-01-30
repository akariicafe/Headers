@class NSString;

@interface WLUIClient : NSObject

@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *brand;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithHostname:(id)a0 brand:(id)a1 model:(id)a2 name:(id)a3;

@end
