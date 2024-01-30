@interface SCROBrailleDisplayInput : NSObject

@property (nonatomic) double quietSince;
@property (nonatomic) double busySince;
@property (nonatomic) double nextWillMemorizeNotificationTime;
@property (nonatomic) double memorizeNextKeyImmediatelyTimeout;
@property (nonatomic) BOOL prepareToMemorizeNextKey;
@property (nonatomic) BOOL requestPrepareToMemorizeNextKey;
@property (nonatomic) BOOL memorizeNextKeyImmediately;
@property (nonatomic) BOOL willMemorizeNow;
@property (nonatomic) BOOL isQuiet;
@property (nonatomic) BOOL newDown;
@property (nonatomic) struct __CFArray { } *currentChord;
@property (nonatomic) struct __CFSet { } *downKeys;
@property (nonatomic) unsigned int routerEvent;
@property (nonatomic) BOOL currentBrailleChordContainsSpacebar;
@property (nonatomic) BOOL currentBrailleChordBeganWithSpacebar;
@property (nonatomic) BOOL currentBrailleChordContainsNonSpacebarChordableKey;
@property (nonatomic) BOOL spacebarIsDown;
@property (nonatomic) BOOL skipBrailleKeyboardKeyTranslation;
@property (nonatomic) double lastBrailleChordTypingTime;
@property (nonatomic) struct __CFArray { } *currentBrailleChord;
@property (nonatomic) struct __CFSet { } *downBrailleDots;
@property (nonatomic) unsigned int currentHIDCommand;
@property (nonatomic) unsigned int currentBrailleModifiers;
@property (nonatomic) unsigned int downBrailleModifiers;
@property (nonatomic) double lastBrailleChordPosted;
@property (nonatomic) double brailleCharExponentialMovingAverage;
@property (nonatomic) double brailleTranslationTimeout;

- (void)dealloc;

@end
