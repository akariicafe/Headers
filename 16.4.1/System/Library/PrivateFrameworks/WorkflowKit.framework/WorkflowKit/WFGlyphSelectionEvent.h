@class NSString;

@interface WFGlyphSelectionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL searchActive;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
