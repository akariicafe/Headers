@class PAImageConversionServiceClient, NSSet, PAVideoConversionServiceClient, NSString;

@interface PHMediaFormatConversionImplementation_MediaConversionService : NSObject <PHMediaFormatConversionImplementation>

@property (retain) PAVideoConversionServiceClient *videoConversionServiceClient;
@property (retain) PAImageConversionServiceClient *imageConversionServiceClient;
@property (readonly) long long transferBehaviorUserPreference;
@property (readonly) NSSet *ut_objectsToBeDeallocatedWithReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)performConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performVideoConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)submitNonSinglePassVideoConversionRequest:(id)a0 destination:(id)a1 completionHandler:(id /* block */)a2;
- (id)submitSinglePassVideoConversionRequest:(id)a0 destination:(id)a1 completionHandler:(id /* block */)a2;
- (void)applyCommonOptionsFromVideoRequest:(id)a0 toOptions:(id)a1;
- (void)performImageConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)applyCommonOptionsFromRequest:(id)a0 toOptions:(id)a1;

@end
