@class NSArray;

@interface WFSplitTextIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *text;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
