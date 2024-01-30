@class SXComponentTextStyle, SXColumnLayout;

@interface SXTextResizer : NSObject {
    BOOL _fontScalingEnabled;
    SXColumnLayout *_columnLayout;
    SXComponentTextStyle *_defaultTextStyle;
}

- (void).cxx_destruct;

@end
