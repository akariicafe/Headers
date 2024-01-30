@class NSArray;

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic, getter=isSystemGesturesAllowed) BOOL systemGesturesAllowed;
@property (retain, nonatomic) NSArray *systemGestureLoggingOptions;

@end
