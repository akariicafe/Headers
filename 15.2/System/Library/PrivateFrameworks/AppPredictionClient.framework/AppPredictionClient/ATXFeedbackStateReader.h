@class NSString, NSData;

@interface ATXFeedbackStateReader : NSObject {
    NSData *_data;
    const char *_perPredictionDataStart;
    int _predictionCount;
    Class _predictedItemKeyClass;
}

@property (readonly, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) long long assetVersion;

+ (id)numberKeyWithData:(id)a0;
+ (id)stringKeyWithData:(id)a0;

- (id)initWithData:(id)a0 predictedItemKeyClass:(Class)a1;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateApps:(id /* block */)a0;

@end
