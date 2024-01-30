@class NSString;

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying> {
    id /* block */ _videoFormatProvider;
}

@property (readonly, copy, nonatomic) NSString *preparedByAttachedMediaKey;

- (int)prepareForInputVideoFormat:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithLazyVideoRequirement:(id)a0;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1;
- (id)initWithAttachedMediaKey:(id)a0 preparedByAttachedMediaKey:(id)a1 videoFormatProvider:(id /* block */)a2;

@end
