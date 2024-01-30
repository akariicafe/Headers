@class NSDictionary, NSString;

@interface FMIPSyncContent : NSObject

@property (retain, nonatomic) NSDictionary *syncObjects;
@property (retain, nonatomic) NSString *firstAnchor;
@property (retain, nonatomic) NSString *postAnchor;
@property (retain, nonatomic) NSString *validity;

- (void).cxx_destruct;
- (id)initWithObjects:(id)a0 anchor:(id)a1;
- (void)objectForPreAnchor:(id)a0 completion:(id /* block */)a1;

@end
