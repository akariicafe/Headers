@class NSString;

@interface SoftISPConnection : NSObject {
    NSString *_sourceStageName;
    NSString *_sourcePropertyName;
    NSString *_destinationStageName;
    NSString *_destinationPropertyName;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)destinationIsGraphOutput;
- (id)initFromStage:(id)a0 fromProperty:(id)a1 toStage:(id)a2 toProperty:(id)a3;
- (BOOL)sourceIsGraphInput;

@end
