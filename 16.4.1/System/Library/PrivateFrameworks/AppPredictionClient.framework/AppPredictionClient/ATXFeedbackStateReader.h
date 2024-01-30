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

- (void)enumerateApps:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 predictedItemKeyClass:(Class)a1;

@end
