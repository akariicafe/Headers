@class BWInferenceLazyVideoRequirement;

@interface BWInferenceCompressibleLazyVideoRequirement : BWInferenceLazyVideoRequirement {
    BWInferenceLazyVideoRequirement *_underlyingLazyVideoRequirement;
}

- (id)initWithLazyVideoRequirement:(id)a0;
- (id)initWithAttachedMediaKey:(id)a0 preparedByAttachedMediaKey:(id)a1 count:(unsigned long long)a2 videoFormatProvider:(id /* block */)a3;
- (void)dealloc;
- (int)prepareForInputInferenceVideoFormat:(id)a0;

@end
