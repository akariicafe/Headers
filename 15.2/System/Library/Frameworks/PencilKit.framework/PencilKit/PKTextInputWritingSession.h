@class NSNumber, NSMutableSet, PKTextInputElement;
@protocol PKTextInputWritingSessionDelegate;

@interface PKTextInputWritingSession : NSObject {
    BOOL _isInvalidated;
    NSMutableSet *_pendingWritingEndedElements;
    BOOL _didSuppressGesturesOverReservedSpace;
    NSNumber *_sessionIdentifier;
    PKTextInputElement *_currentTargetElement;
    id<PKTextInputWritingSessionDelegate> _delegate;
    double _beginTimestamp;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
