@class NSString, AFMyriadAdvertisementContext, NSData;

@interface _AFMyriadAdvertisementContextMutation : NSObject <AFMyriadAdvertisementContextMutating> {
    AFMyriadAdvertisementContext *_baseModel;
    unsigned long long _generation;
    NSData *_contextData;
    double _contextFetchDelay;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasGeneration : 1; unsigned char hasContextData : 1; unsigned char hasContextFetchDelay : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContextData:(id)a0;
- (void)setGeneration:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setContextFetchDelay:(double)a0;
- (id)initWithBaseModel:(id)a0;

@end
