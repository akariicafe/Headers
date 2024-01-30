@protocol NFAccessoryTagDelegate;

@interface NFAccessoryTag : NSObject

@property (weak, nonatomic) id<NFAccessoryTagDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
