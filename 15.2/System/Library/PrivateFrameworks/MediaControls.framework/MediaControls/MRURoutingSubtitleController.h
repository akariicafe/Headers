@class NSString, NSMutableDictionary;
@protocol MRURoutingSubtitleControllerDelegate;

@interface MRURoutingSubtitleController : NSObject

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly, nonatomic) long long state;
@property (weak, nonatomic) id<MRURoutingSubtitleControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly, nonatomic) BOOL canTransitionToNextState;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long accessory;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)prepareForReuse;
- (void)transitionToNextAvailableState;
- (void)setText:(id)a0 forState:(long long)a1;
- (void)setText:(id)a0 forState:(long long)a1 accessory:(long long)a2;
- (long long)nextAvailableTextState;

@end
