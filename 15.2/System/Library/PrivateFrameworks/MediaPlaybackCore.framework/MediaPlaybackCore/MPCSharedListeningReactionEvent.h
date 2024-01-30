@class NSString, MPModelGenericObject;

@interface MPCSharedListeningReactionEvent : NSObject

@property (readonly, copy, nonatomic) NSString *reactionIdentifier;
@property (readonly, copy, nonatomic) NSString *reaction;
@property (readonly, nonatomic) MPModelGenericObject *item;

- (id)description;
- (void).cxx_destruct;
- (id)initWithReaction:(id)a0 reactionIdentifier:(id)a1 item:(id)a2;

@end
