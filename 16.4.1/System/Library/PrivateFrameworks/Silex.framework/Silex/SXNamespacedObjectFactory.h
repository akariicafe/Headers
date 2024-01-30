@class NSString;

@interface SXNamespacedObjectFactory : NSObject <SXNamespacedObjectFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createNamespacedComponentStylesReferencesForComponent:(id)a0 DOM:(id)a1;
- (void)createNamespacedComponentTextStylesReferencesForComponent:(id)a0 DOM:(id)a1;
- (id)createNamespacedReferenceForComponentStyle:(id)a0 component:(id)a1 DOM:(id)a2;
- (id)createNamespacedReferenceForComponentTextStyle:(id)a0 component:(id)a1 DOM:(id)a2;
- (id)createNamespacedReferenceForTextStyle:(id)a0 component:(id)a1 DOM:(id)a2;
- (void)createNamespacedTextStylesReferencesForComponent:(id)a0 DOM:(id)a1;

@end
