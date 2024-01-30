@class NSArray, NSMapTable, _UIAppearanceCustomizableClassInfo, NSMutableArray;

@interface _UIAppearance : NSObject {
    NSArray *_containerList;
    NSMutableArray *_appearanceInvocations;
    NSMapTable *_invocationSources;
}

@property (readonly, nonatomic) _UIAppearanceCustomizableClassInfo *_customizableClassInfo;

+ (void)_setCurrentAppearanceSource:(id)a0;
+ (id)recursiveDescription;
+ (BOOL)_hasCustomizationsForClass:(Class)a0 guideClass:(Class)a1;
+ (BOOL)_hasAnyCustomizations;
+ (id)_newAppearanceWithClassInfo:(id)a0 containerList:(id)a1;
+ (void)_applyInvocationsTo:(id)a0 window:(id)a1 matchingSelector:(SEL)a2 onlySystemInvocations:(BOOL)a3;
+ (void)_removeWindow:(id)a0 forSource:(id)a1;
+ (id)_recordersExcludingSource:(id)a0 withWindow:(id)a1;
+ (id)appearancesAtNode:(id)a0 withObject:(id)a1;
+ (id)_appearanceForClass:(Class)a0 withContainerList:(id)a1;
+ (id)_windowsForSource:(id)a0;
+ (id)_pendingRecordInvocationsForSource:(id)a0;
+ (void)_removeInvocationsForSource:(id)a0;
+ (id)_appearanceWithClassInfo:(id)a0 containerList:(id)a1;
+ (id)_recorderForSource:(id)a0;
+ (id)_appearanceNodeForClassInfo:(id)a0 containerList:(id)a1;
+ (void)_setInvalidatesViewsOnAppearanceChange:(BOOL)a0;
+ (void)_addWindow:(id)a0 forSource:(id)a1;
+ (void)_appendDescriptionOfNode:(id)a0 toString:(id)a1 atLevel:(unsigned long long)a2;
+ (void)_applyInvocationsTo:(id)a0 window:(id)a1;
+ (void)_applyInvocationsTo:(id)a0 window:(id)a1 matchingSelector:(SEL)a2;
+ (id)_rootAppearancesNode;
+ (id)_currentAppearanceSource;

- (void)_appendDescriptionToString:(id)a0 atLevel:(unsigned long long)a1;
- (void)_handleGetterInvocation:(id)a0;
- (id)_traitCollection;
- (void)_handleSetterInvocation:(id)a0;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (SEL)_beginListeningForAppearanceEventsForSetter:(SEL)a0;
- (void)_invalidateAppearanceInWindow:(id)a0;
- (id)description;
- (id)_appearanceInvocations;
- (BOOL)_isRecordingInvocations;
- (void)_removeInvocationsForSource:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;

@end
