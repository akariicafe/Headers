@class NSString;

@interface _UIButtonConfigurationStyleBehaviors : NSObject {
    long long _style;
    NSString *_styleDescription;
    id /* block */ _calculateForegroundColor;
    id /* block */ _calculateBackgroundColor;
    long long _selectionStyle;
    long long _automaticMacIdiomStyle;
    long long _cornerStyle;
}

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;

@end
