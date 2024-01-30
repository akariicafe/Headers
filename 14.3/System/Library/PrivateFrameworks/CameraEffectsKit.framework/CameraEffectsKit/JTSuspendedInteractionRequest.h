@class NSString, NSArray;

@interface JTSuspendedInteractionRequest : NSObject

@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSArray *excludedChildViewControllers;

+ (id)requestWithTag:(id)a0 excludedViewControllers:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
