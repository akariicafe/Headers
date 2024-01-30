@class NSString, NSDictionary;

@interface ICMediaAPIURLMapping : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *pattern;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
