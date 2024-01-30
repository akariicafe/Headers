@class DOCFeatureState;

@interface DOCFeature : NSObject

@property (class, readonly) DOCFeatureState *DSCopyEngine;
@property (class, readonly) DOCFeatureState *copyProgressIndeterminateUI;
@property (class, readonly) DOCFeatureState *inlineRename;
@property (class, readonly) DOCFeatureState *denseIconGrid;
@property (class, readonly) DOCFeatureState *configurableWidget;
@property (class, readonly) DOCFeatureState *keyboardSelection;
@property (class, readonly) DOCFeatureState *shortcutsActions;
@property (class, readonly) DOCFeatureState *useBlastDoorThumbnails;
@property (class, readonly) DOCFeatureState *groupItems;
@property (class, readonly) DOCFeatureState *goToFolder;
@property (class, readonly) DOCFeatureState *goToFolderBlurAnimation;
@property (class, readonly) DOCFeatureState *groupHorizontalScrolling;
@property (class, readonly) DOCFeatureState *shapeTagsSupported;
@property (class, readonly) DOCFeatureState *quickLookMultiWindow;

@end
