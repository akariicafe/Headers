@class PHASEEnvelope, PHASESoundEventNodeDefinition;

@interface BlendRange : NSObject {
    PHASESoundEventNodeDefinition *subtree;
    PHASEEnvelope *blendEnvelope;
}

- (void).cxx_destruct;

@end
