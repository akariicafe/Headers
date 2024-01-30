@class NSString;

@interface ICSharedTracklistPosition : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *afterItemIdentifier;

+ (id)playLastPositionWithAfterItemIdentifierHint:(id)a0;
+ (id)playNextPositionWithAfterItemIdentifierHint:(id)a0;
+ (id)specifiedPositionAfterItemIdentifier:(id)a0;

- (void).cxx_destruct;

@end
