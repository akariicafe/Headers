@interface WFWeatherChannelValidator : NSObject

+ (id)expectedStructure;
+ (BOOL)isLeafNodeType:(id)a0;

- (BOOL)validateDictionary:(id)a0 expectedStructure:(id)a1;
- (BOOL)validateResponseData:(id)a0;

@end
