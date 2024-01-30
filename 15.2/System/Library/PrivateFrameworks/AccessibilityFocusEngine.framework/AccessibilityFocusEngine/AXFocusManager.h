@class NSString, NSHashTable, NSObject, AXElement;
@protocol OS_dispatch_queue;

@interface AXFocusManager : NSObject

@property (retain, nonatomic) NSString *typeaheadString;
@property (nonatomic) int pidForSuccessfulTypeaheadMovement;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *movementQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observersQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property (readonly, nonatomic) AXElement *currentApplication;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateObservers:(id /* block */)a0;
- (id)init;
- (id)_currentApplications;
- (BOOL)_focusOnApplicationWithPID:(int)a0;
- (void)_moveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1 queryString:(id)a2 shouldWrap:(BOOL)a3;
- (void)moveFocusInsideForward:(BOOL)a0 shouldWrap:(BOOL)a1;
- (id)currentElement;
- (void)_moveToElementWithHeading:(unsigned long long)a0 queryString:(id)a1;
- (BOOL)_moveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1 shouldWrap:(BOOL)a2;
- (void)_verifyPIDForTypeahead;
- (unsigned long long)_indexOfTypeaheadPIDInApplications:(id)a0;
- (BOOL)_moveFocusInApplication:(id)a0 withHeading:(unsigned long long)a1 queryString:(id)a2;
- (BOOL)_recursiveMoveFocusInApplication:(id)a0 withHeading:(unsigned long long)a1 queryString:(id)a2;
- (BOOL)_recursiveMoveFocusInApplication:(id)a0 withHeading:(unsigned long long)a1 byGroup:(BOOL)a2;
- (BOOL)_moveFocusInRemoteElement:(id)a0 withHeading:(unsigned long long)a1 byGroup:(BOOL)a2;
- (void)_handleFailedFocusMovementWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1;
- (id)_moveApplicationFocusInDirection:(long long)a0;
- (void)moveFocusWithHeading:(unsigned long long)a0 byGroup:(BOOL)a1;
- (void)moveFocusInsideForward:(BOOL)a0;
- (void)moveFocusWithHeading:(unsigned long long)a0 queryString:(id)a1;
- (void)focusOnApplicationForTypeahead;

@end
