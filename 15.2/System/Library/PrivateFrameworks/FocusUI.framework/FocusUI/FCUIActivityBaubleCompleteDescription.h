@class NSString;

@interface FCUIActivityBaubleCompleteDescription : FCUIActivityBaubleDescription <FCUIActivityBaubleLayoutDescribing>

@property (readonly, nonatomic) double referencePointSize;
@property (readonly, nonatomic) double maximumPointSize;
@property (readonly, nonatomic) double referenceDimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSystemImageName:(id)a0 tintColor:(id)a1 referencePointSize:(double)a2 maximumPointSize:(double)a3 referenceDimension:(double)a4;
- (id)initWithActivityDescription:(id)a0 referencePointSize:(double)a1 maximumPointSize:(double)a2 referenceDimension:(double)a3;

@end
