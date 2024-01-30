@class NSString;

@interface NUTitleViewUpdate : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) unsigned long long valueType;
@property (readonly, nonatomic) unsigned long long styleType;
@property (nonatomic, getter=shouldCancelPendingUpdates) BOOL cancelPendingUpdates;
@property (nonatomic) double lingerTimeInterval;
@property (nonatomic, getter=shouldSpeakAccessibilityTitleWhenDisplayed) BOOL speakAccessibilityTitleWhenDisplayed;
@property (copy, nonatomic) NSString *accessibilityTitle;
@property (nonatomic) long long textAlignment;

- (id)initWithImage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 valueType:(unsigned long long)a1 styleType:(unsigned long long)a2;
- (id)initWithText:(id)a0 styleType:(unsigned long long)a1 glyph:(id)a2;
- (id)initWithText:(id)a0 styleType:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithAttributedText:(id)a0 styleType:(unsigned long long)a1;

@end
