@class NSArray, NSString, NSNumber;

@interface EDAMRelatedResult : FATObject

@property (retain, nonatomic) NSArray *notes;
@property (retain, nonatomic) NSArray *notebooks;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSArray *containingNotebooks;
@property (retain, nonatomic) NSString *debugInfo;
@property (retain, nonatomic) NSArray *experts;
@property (retain, nonatomic) NSArray *relatedContent;
@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSNumber *cacheExpires;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
