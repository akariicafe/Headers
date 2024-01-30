@class NSString, NSISVariable;

@interface NSISPlaybackOperationVariableDelegate : NSObject

@property (retain) NSISVariable *variable;
@property (copy) NSString *variableDescription;
@property (copy) NSString *markedConstraintDescription;
@property BOOL variableIsUserObservable;
@property int orientationHint;

- (BOOL)nsis_valueOfVariableIsUserObservable:(id)a0;
- (id)nsis_descriptionOfVariable:(id)a0;
- (void)dealloc;
- (void)nsis_valueOfVariable:(id)a0 didChangeInEngine:(id)a1;
- (int)nsis_orientationHintForVariable:(id)a0;
- (id)firstItem;
- (id)description;
- (void)_addToEngine:(id)a0;
- (id)secondItem;

@end
