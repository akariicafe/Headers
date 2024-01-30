@class DOCFeatureState;

@interface DOCFeature : NSObject

@property (class, readonly) DOCFeatureState *DSCopyEngine;
@property (class, readonly) DOCFeatureState *inlineRename;
@property (class, readonly) DOCFeatureState *denseIconGrid;

@end
