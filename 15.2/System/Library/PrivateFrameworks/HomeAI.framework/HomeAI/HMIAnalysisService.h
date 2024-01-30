@class NSString;

@interface HMIAnalysisService : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)cancelRequest:(int)a0;
- (id)expectedClasses;
- (id)init;
- (int)requestAnalysisForPixelBuffer:(struct __CVBuffer { } *)a0 withProperties:(id)a1 andCompletionHandler:(id /* block */)a2;
- (int)requestAnalysisForAssetData:(id)a0 withProperties:(id)a1 andCompletionHandler:(id /* block */)a2;

@end
