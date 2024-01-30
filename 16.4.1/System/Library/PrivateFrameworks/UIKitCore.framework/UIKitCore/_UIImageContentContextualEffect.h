@class UIImageSymbolConfiguration;
@protocol _UIImageContentLayoutSource, _UIImageContentEffect;

@interface _UIImageContentContextualEffect : NSObject {
    UIImageSymbolConfiguration *_symbolConfiguration;
    id<_UIImageContentEffect> _effect;
    id<_UIImageContentLayoutSource> _source;
}

- (void).cxx_destruct;

@end
