@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BLTGizmoLegacyMap : NSObject {
    NSMutableDictionary *_gizmoBulletinKeyMap;
    NSMutableDictionary *_phoneBulletinKeyMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)phonePublisherBulletinIDForGizmoKey:(id)a0;
- (id)phoneSectionIDForGizmoKey:(id)a0;
- (void)_addMapKey:(id)a0 value:(id)a1 bulletinKey:(id)a2 version:(unsigned long long)a3 versionDictionary:(id)a4;
- (void)mapNotification:(id)a0 sectionID:(id)a1;
- (void)unmapNotification:(id)a0 sectionID:(id)a1;
- (id)categoryIDForBulletinKey:(id)a0;
- (id)sectionSubtypeForBulletinKey:(id)a0;
- (id)gizmoPublisherBulletinIDForPhoneKey:(id)a0;
- (id)gizmoSectionInfoForPhoneKey:(id)a0;

@end
