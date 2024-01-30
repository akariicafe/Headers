@protocol _CNHandleStringClassificationStrategy;

@interface CNHandleStringClassifier : NSObject

@property (readonly, nonatomic) id<_CNHandleStringClassificationStrategy> classificationStrategy;

+ (id)classificationOfHandleStrings:(id)a0 classificationQuality:(unsigned long long)a1;
+ (id)classificationStrategyForQuality:(unsigned long long)a0;
+ (id)classificationOfHandleStrings:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)classifyHandleString:(id)a0 builder:(id)a1;
- (id)description;
- (unsigned long long)typeOfHandleString:(id)a0;
- (id)initWithClassificationStrategy:(id)a0;
- (id)initWithClassificationQuality:(unsigned long long)a0;

@end
