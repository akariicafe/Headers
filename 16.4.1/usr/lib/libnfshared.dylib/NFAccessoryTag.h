@protocol NFAccessoryTagDelegate;

@interface NFAccessoryTag : NSObject

@property (weak, nonatomic) id<NFAccessoryTagDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
