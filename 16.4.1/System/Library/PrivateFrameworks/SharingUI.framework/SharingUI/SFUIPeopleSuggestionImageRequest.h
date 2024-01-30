@protocol SFPeopleSuggestion;

@interface SFUIPeopleSuggestionImageRequest : SFUIImageRequest

@property (readonly, copy, nonatomic) id<SFPeopleSuggestion> peopleSuggestion;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithRequestID:(int)a0 peopleSuggestion:(id)a1 type:(long long)a2 resultHandler:(id /* block */)a3;

@end
