@class NSString, NSArray, NSMutableDictionary, TIContinuousPath;

@interface TTKTestCaseRecord : NSObject {
    NSMutableDictionary *_internalAnnotations;
}

@property (readonly, copy, nonatomic) NSString *primaryIntendedText;
@property (readonly, copy, nonatomic) NSArray *intendedText;
@property (readonly, copy, nonatomic) NSArray *additionalIntendedTexts;
@property (readonly, copy, nonatomic) NSString *inputText;
@property (readonly, copy, nonatomic) NSString *transliteration;
@property (readonly, copy, nonatomic) NSArray *touchDataCollection;
@property (readonly, copy, nonatomic) TIContinuousPath *touchData;
@property (readonly, copy, nonatomic) NSString *layoutName;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) NSMutableDictionary *annotations;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntendedText:(id)a0 additionalIntendedTexts:(id)a1 touchDataCollection:(id)a2 recordID:(id)a3 layoutName:(id)a4 inputText:(id)a5 transliteration:(id)a6 context:(id)a7 annotations:(id)a8;
- (void)setAnnotation:(id)a0 forKey:(id)a1;
- (id)toJsonDictionary;

@end
