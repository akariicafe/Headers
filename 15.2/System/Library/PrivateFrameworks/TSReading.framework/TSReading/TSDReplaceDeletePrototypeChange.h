@class NSString;
@protocol TSSPropertySource;

@interface TSDReplaceDeletePrototypeChange : NSObject <TSDPrototypeChange>

@property (readonly) BOOL prototypeIsBeingReplaced;
@property (readonly) BOOL prototypeIsBeingModified;
@property (readonly) BOOL prototypeIsBeingDeleted;
@property (readonly, retain) id prototype;
@property (readonly, retain) id replacement;
@property (readonly, retain) id<TSSPropertySource> propertiesBeforeChange;
@property (readonly, retain) id<TSSPropertySource> propertiesAfterChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)propertyIsChanging:(int)a0;
- (BOOL)propertiesAreChanging:(id)a0;
- (id)initReplacePrototypeChangeForPrototype:(id)a0 toReplacement:(id)a1;
- (id)initDeletePrototypeChangeForPrototype:(id)a0 replacement:(id)a1;
- (id)changedPropertySet;

@end
