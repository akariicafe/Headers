@class DOCFeatureState;

@interface DOCFeature : NSObject

@property (class, readonly) DOCFeatureState *DSCopyEngine;
@property (class, readonly) DOCFeatureState *configurableWidget;
@property (class, readonly) DOCFeatureState *useBlastDoorThumbnails;
@property (class, readonly) DOCFeatureState *fpfsEnumeration;
@property (class, readonly) DOCFeatureState *sortableColumns;
@property (class, readonly) DOCFeatureState *newDocumentPicker;
@property (class, readonly) DOCFeatureState *sidebarContextMenu;
@property (class, readonly) DOCFeatureState *undoRedoSupportForActions;
@property (class, readonly) DOCFeatureState *toblerone;
@property (class, readonly) DOCFeatureState *louvre;
@property (class, readonly) DOCFeatureState *systemProvidedFocusAppearance;
@property (class, readonly) DOCFeatureState *finderStyleIconFocusAppearance;
@property (class, readonly) DOCFeatureState *dciTextEditingMenus;
@property (class, readonly) DOCFeatureState *pickerInlineRename;
@property (class, readonly) DOCFeatureState *recentlyUsedSection;
@property (class, readonly) DOCFeatureState *keyboardFocusEngine;
@property (class, readonly) BOOL supportsGelato;

+ (id)gelatoCore;
+ (id)gelatoFiles;

@end
