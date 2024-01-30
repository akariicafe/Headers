@class NSString;

@interface PGFeatureSliceTransformer : NSObject <PGFeatureTransformer>

@property (readonly, nonatomic) long long fromIndex;
@property (readonly, nonatomic) long long toIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)name;
+ (id)instanceWithParameters:(id)a0 error:(id *)a1;

@end
