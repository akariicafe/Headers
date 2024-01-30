@class NSArray, NSString;

@interface ARTechniqueGatherContext : NSObject <NSSecureCoding, ARResultDataContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id parentContext;
@property (readonly, nonatomic) NSArray *gatheredData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resultDataOfClass:(Class)a0;
- (id)imageData;
- (long long)cameraPosition;
- (id)anchorsToAdd;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)anchorsToRemove;
- (id)initWithParentContext:(id)a0;
- (id)captureGatheredData;

@end
