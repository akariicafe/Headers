@class NSUUID, NSMutableDictionary, NSPredicate, NSObject;
@protocol OS_dispatch_queue;

@interface HMDNameValidator : HMFObject

@property (retain, nonatomic) NSMutableDictionary *namespaceList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSUUID *homeManagerUUID;
@property (retain, nonatomic) NSPredicate *nonZeroLengthPredicate;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)_validateName:(id)a0;
- (id)addNamespace:(id)a0;
- (id)validateName:(id)a0;
- (id)addName:(id)a0 namespace:(id)a1;
- (id)addActionSetName:(id)a0 namespace:(id)a1;
- (id)removeName:(id)a0 namespace:(id)a1;
- (id)replaceName:(id)a0 withNewName:(id)a1 inNamespaces:(id)a2;
- (id)replaceActionSetName:(id)a0 withNewName:(id)a1 inNamespaces:(id)a2;
- (id)_addNamespace:(id)a0;
- (id)despaceName:(id)a0;
- (id)_removeName:(id)a0 namespace:(id)a1;
- (id)_addName:(id)a0 namespace:(id)a1;
- (id)_removeNamespace:(id)a0;
- (id)_checkForConflict:(id)a0 namespace:(id)a1;
- (id)addName:(id)a0 namespace:(id)a1 voiceShortcutCheck:(BOOL)a2;
- (id)replaceName:(id)a0 withNewName:(id)a1 inNamespaces:(id)a2 voiceShortcutCheck:(BOOL)a3;
- (id)_replaceName:(id)a0 withNewName:(id)a1 inNamespaces:(id)a2;
- (id)removeNamespace:(id)a0;
- (id)checkForConflict:(id)a0 namespace:(id)a1;

@end
