@class NSUUID;

@interface WFContextualActionSuggestionMetadata : NSObject

@property (readonly, nonatomic) NSUUID *suggestionUUID;
@property (readonly, nonatomic) NSUUID *sessionUUID;

- (void).cxx_destruct;
- (id)initWithSuggestionUUID:(id)a0 sessionUUID:(id)a1;

@end
