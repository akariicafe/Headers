@class NSString, NSArray;

@interface PLSearchOCRTextLineCandidate : NSObject

@property (readonly, nonatomic) NSString *line;
@property (readonly, nonatomic) NSArray *words;
@property (readonly, nonatomic) double confidence;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLine:(id)a0 words:(id)a1 confidence:(double)a2;

@end
