@class NSMutableSet;

@interface ATXDefaultHomeScreenItemTilerHelper : NSObject {
    NSMutableSet *_usedBundleIds;
    NSMutableSet *_usedSpecialKinds;
}

- (void)_markWidgetAsUsed:(id)a0;
- (BOOL)_isSpecialAvocadoDescriptorKind:(id)a0;
- (void)unmarkWidgetAsUsed:(id)a0;
- (id)init;
- (BOOL)_isWidgetAlreadyUsed:(id)a0;
- (id)filterForNextUnusedWidgetDescriptor:(id)a0;
- (void).cxx_destruct;

@end
