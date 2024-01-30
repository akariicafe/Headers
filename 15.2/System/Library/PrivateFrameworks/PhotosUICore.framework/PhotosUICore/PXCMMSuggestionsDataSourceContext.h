@class PHSuggestionMessageContext;

@interface PXCMMSuggestionsDataSourceContext : NSObject

@property (readonly, nonatomic) unsigned char type;
@property (retain, nonatomic) PHSuggestionMessageContext *messageContext;
@property (nonatomic) unsigned long long matchingStrategy;
@property (nonatomic) BOOL shouldShowAccepted;
@property (nonatomic) long long fetchLimit;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0;
- (BOOL)supportsMatching;

@end
