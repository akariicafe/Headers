@protocol _UIImageContentLayoutSource, _UIImageContentEffect;

@interface _UIImageContentContextualEffect : NSObject {
    id<_UIImageContentEffect> _effect;
    id<_UIImageContentLayoutSource> _source;
}

- (void).cxx_destruct;

@end
