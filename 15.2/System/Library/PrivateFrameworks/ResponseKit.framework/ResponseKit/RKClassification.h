@class NSString, NSArray;

@interface RKClassification : NSObject

@property (retain) NSString *language;
@property unsigned long long sentenceType;
@property (getter=isSensitive) int sensitive;
@property unsigned long long gender;
@property (retain) NSArray *customResponses;
@property (retain) NSString *taggedText;
@property (retain) NSArray *sentenceEntities;
@property (retain) NSArray *matchedRanges;

- (void).cxx_destruct;
- (id)init;

@end
