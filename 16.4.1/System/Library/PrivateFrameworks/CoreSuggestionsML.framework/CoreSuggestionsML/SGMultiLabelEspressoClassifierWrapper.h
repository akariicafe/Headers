@class NSString, _PASLazyPurgeableResult;

@interface SGMultiLabelEspressoClassifierWrapper : NSObject

@property (retain, nonatomic) NSString *espressoModelFile;
@property (retain, nonatomic) _PASLazyPurgeableResult *classifier;

- (void).cxx_destruct;

@end
