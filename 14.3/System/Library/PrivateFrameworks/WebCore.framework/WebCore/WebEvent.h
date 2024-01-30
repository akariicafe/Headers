@class NSString, NSArray;

@interface WebEvent : NSObject {
    struct CGPoint { double x; double y; } _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    BOOL _keyRepeating;
    unsigned long long _keyboardFlags;
    NSString *_inputManagerHint;
    unsigned short _keyCode;
    BOOL _tabKey;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    BOOL _isGesture;
    float _gestureScale;
    float _gestureRotation;
}

@property (class, readonly) unsigned int modifierFlags;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } locationInWindow;
@property (readonly, retain, nonatomic) NSString *characters;
@property (readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;
@property (readonly, nonatomic) unsigned int modifierFlags;
@property (readonly, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;
@property (readonly, retain, nonatomic) NSString *inputManagerHint;
@property (readonly, nonatomic) unsigned long long keyboardFlags;
@property (readonly, nonatomic) unsigned short keyCode;
@property (readonly, nonatomic, getter=isTabKey) BOOL tabKey;
@property (readonly, nonatomic) float deltaX;
@property (readonly, nonatomic) float deltaY;
@property (readonly, nonatomic) unsigned int touchCount;
@property (readonly, retain, nonatomic) NSArray *touchLocations;
@property (readonly, retain, nonatomic) NSArray *touchIdentifiers;
@property (readonly, retain, nonatomic) NSArray *touchPhases;
@property (readonly, nonatomic) BOOL isGesture;
@property (readonly, nonatomic) float gestureScale;
@property (readonly, nonatomic) float gestureRotation;
@property (nonatomic) BOOL wasHandled;

- (id)initWithTouchEventType:(int)a0 timeStamp:(double)a1 location:(struct CGPoint { double x0; double x1; })a2 modifiers:(unsigned int)a3 touchCount:(unsigned int)a4 touchLocations:(id)a5 touchIdentifiers:(id)a6 touchPhases:(id)a7 isGesture:(BOOL)a8 gestureScale:(float)a9 gestureRotation:(float)a10;
- (id)initWithKeyEventType:(int)a0 timeStamp:(double)a1 characters:(id)a2 charactersIgnoringModifiers:(id)a3 modifiers:(unsigned int)a4 isRepeating:(BOOL)a5 withFlags:(unsigned long long)a6 withInputManagerHint:(id)a7 keyCode:(unsigned short)a8 isTabKey:(BOOL)a9;
- (id)_touchPhaseDescription:(int)a0;
- (id)_touchLocationsDescription:(id)a0;
- (id)_touchIdentifiersDescription;
- (id)_touchPhasesDescription;
- (id)_eventDescription;
- (id)_modiferFlagsDescription;
- (void)dealloc;
- (id)description;
- (id)_typeDescription;
- (id)initWithMouseEventType:(int)a0 timeStamp:(double)a1 location:(struct CGPoint { double x0; double x1; })a2 modifiers:(unsigned int)a3;
- (id)initWithMouseEventType:(int)a0 timeStamp:(double)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithScrollWheelEventWithTimeStamp:(double)a0 location:(struct CGPoint { double x0; double x1; })a1 deltaX:(float)a2 deltaY:(float)a3;

@end
