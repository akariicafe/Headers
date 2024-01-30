@protocol _CNHandleStringClassificationStrategy;

@interface CNHandleStringClassifier : NSObject

@property (readonly, nonatomic) id<_CNHandleStringClassificationStrategy> classificationStrategy;

+ (id)classificationStrategyForQuality:(unsigned long long)a0;
+ (id)classificationOfHandleStrings:(id)a0;
+ (id)classificationOfHandleStrings:(id)a0 classificationQuality:(unsigned long long)a1;

- (unsigned long long)typeOfHandleString:(id)a0;
- (id)initWithClassificationQuality:(unsigned long long)a0;
- (id)initWithClassificationStrategy:(id)a0;
- (void)classifyHandleString:(id)a0 builder:(id)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
