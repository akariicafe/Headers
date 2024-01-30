@class NSNumber, PKTextInputElement;

@interface PKTextInputWritingSession : NSObject {
    BOOL _isInvalidated;
}

@property (readonly, nonatomic) NSNumber *sessionIdentifier;
@property (retain, nonatomic) PKTextInputElement *currentTargetElement;
@property (readonly, nonatomic) BOOL didSuppressGesturesOverReservedSpace;
@property (readonly, nonatomic) double beginTimestamp;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)setDidSuppressGesturesOverReservedSpace;

@end
