@class NSString, NSArray, NSMutableDictionary;

@interface IPFeatureKeyword : IPFeature

@property (retain) NSString *keywordString;
@property (retain, nonatomic) NSArray *eventTypes;
@property unsigned long long type;
@property (readonly) NSMutableDictionary *contextDictionary;

+ (id)featureKeywordWithType:(unsigned long long)a0 string:(id)a1 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

- (id)typeDescription;
- (void).cxx_destruct;
- (id)description;
- (void)addEventType:(id)a0;
- (id)humandReadableEventTypes;

@end
