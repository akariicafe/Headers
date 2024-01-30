@protocol BRKFTroopDelegate;

@interface BRKFTroop : NSObject

@property (weak, nonatomic) id<BRKFTroopDelegate> delegate;

+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (void)startListeningForDemoReset;
- (void)stopListeningForDemoReset;

@end
