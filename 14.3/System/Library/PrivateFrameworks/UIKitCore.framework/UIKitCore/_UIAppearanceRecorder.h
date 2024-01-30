@class NSString, NSArray, NSData, NSMutableArray;

@interface _UIAppearanceRecorder : NSObject {
    NSMutableArray *_customizations;
    NSArray *_unarchivedCustomizations;
}

@property (copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord;
@property (nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord;
@property (copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames;
@property (readonly, nonatomic) NSData *_serializedRepresentation;

+ (id)_sharedAppearanceRecorderForClassNamed:(id)a0 superclass:(Class)a1 whenContainedIn:(id)a2;
+ (id)_sharedAppearanceRecorder;
+ (id)_sharedAppearanceRecorderForClass:(Class)a0 whenContainedIn:(id)a1;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (void)_recordInvocation:(id)a0 withClassName:(id)a1 containerClassNames:(id)a2 traitCollection:(id)a3 selectorString:(id)a4 forRemoteProcess:(BOOL)a5;
- (void)_applyCustomizations;
- (void)_importCustomizations:(id)a0 withArchiveVersion:(long long)a1;
- (id)initWithSerializedRepresentation:(id)a0;

@end
