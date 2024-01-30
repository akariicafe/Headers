@class NSString, AXElement, NSObject;
@protocol OS_dispatch_queue;

@interface AXFocusManager : NSObject

@property (retain, nonatomic) NSString *typeaheadString;
@property (nonatomic) int pidForSuccessfulTypeaheadMovement;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *movementQueue;
@property (readonly, nonatomic) AXElement *currentApplication;

- (id)init;
- (void).cxx_destruct;
- (id)_currentApplications;
- (BOOL)_focusOnApplicationWithPID:(int)a0;
- (void)moveFocusWithHeading:(unsigned long long)a0 queryString:(id)a1;
- (id)currentElement;
- (void)_moveToElementWithHeading:(unsigned long long)a0 queryString:(id)a1;
- (BOOL)_moveFocusWithHeading:(unsigned long long)a0 shouldWrap:(BOOL)a1;
- (void)_verifyPIDForTypeahead;
- (unsigned long long)_indexOfTypeaheadPIDInApplications:(id)a0;
- (BOOL)_moveFocusInApplication:(id)a0 withHeading:(unsigned long long)a1 queryString:(id)a2;
- (BOOL)_recursiveMoveFocusInApplication:(id)a0 withHeading:(unsigned long long)a1 queryString:(id)a2;
- (BOOL)_recursiveMoveFocusInApplication:(id)a0 withHeading:(unsigned long long)a1;
- (BOOL)_moveFocusInRemoteElement:(id)a0 withHeading:(unsigned long long)a1;
- (void)_handleFailedFocusMovementWithHeading:(unsigned long long)a0;
- (id)_moveApplicationFocusInDirection:(long long)a0;
- (void)moveFocusWithHeading:(unsigned long long)a0;
- (void)moveFocusInsideForward:(BOOL)a0;
- (void)focusOnApplicationForTypeahead;

@end
