@class NSDictionary;

@interface TIZhuyinPunctuationManager : NSObject

@property (readonly) NSDictionary *punctuationMap;

+ (id)shareZhuyinPunctuationManager;

- (id)candidatesFor:(id)a0;

@end
