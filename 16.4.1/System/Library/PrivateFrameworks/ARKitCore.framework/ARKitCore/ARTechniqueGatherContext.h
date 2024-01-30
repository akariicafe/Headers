@class NSArray, NSString;

@interface ARTechniqueGatherContext : NSObject <NSSecureCoding, ARResultDataContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id parentContext;
@property (readonly, nonatomic) NSArray *gatheredData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)cameraPosition;
- (void)encodeWithCoder:(id)a0;
- (id)imageData;
- (id)initWithCoder:(id)a0;
- (id)anchorsToAdd;
- (void).cxx_destruct;
- (id)anchorsToRemove;
- (id)captureGatheredData;
- (id)initWithParentContext:(id)a0;
- (id)resultDataOfClass:(Class)a0;

@end
