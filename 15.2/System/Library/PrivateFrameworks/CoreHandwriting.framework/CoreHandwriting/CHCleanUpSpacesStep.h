@class NSLocale;

@interface CHCleanUpSpacesStep : CHPostprocessingStep

@property (retain, nonatomic) NSLocale *locale;

- (id)initWithLocale:(id)a0;
- (id)process:(id)a0;
- (void)dealloc;
- (id)cleanUpSpacesInToken:(id)a0 leftContext:(id)a1;

@end
