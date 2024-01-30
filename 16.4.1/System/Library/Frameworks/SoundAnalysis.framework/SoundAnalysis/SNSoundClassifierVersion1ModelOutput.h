@class NSDictionary, NSString, NSSet;

@interface SNSoundClassifierVersion1ModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSDictionary *_9;
@property (retain, nonatomic) NSString *classLabel;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWith_9:(id)a0 classLabel:(id)a1;

@end
