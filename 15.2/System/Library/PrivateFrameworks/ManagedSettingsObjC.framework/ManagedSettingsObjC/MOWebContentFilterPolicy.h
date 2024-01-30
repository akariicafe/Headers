@class NSArray;

@interface MOWebContentFilterPolicy : NSObject

@property (readonly) NSArray *autoAllow;
@property (readonly) NSArray *neverAllow;
@property (readonly) NSArray *onlyAllow;

- (void).cxx_destruct;
- (id)initWithAutoAllow:(id)a0 neverAllow:(id)a1 onlyAllow:(id)a2;

@end
