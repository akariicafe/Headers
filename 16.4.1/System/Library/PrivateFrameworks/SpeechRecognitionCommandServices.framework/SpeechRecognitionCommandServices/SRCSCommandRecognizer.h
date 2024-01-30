@class NSArray, SRCSCommandRecognitionSystem;

@interface SRCSCommandRecognizer : NSObject {
    NSArray *_spokenCommands;
    SRCSCommandRecognitionSystem *_commandRecognitionSystem;
}

@property BOOL active;

- (void).cxx_destruct;
- (id)initWithCommandRecognitionSystem:(id)a0 commandIdentifiers:(id)a1;
- (id)spokenCommands;
- (id)commandRecognitionSystem;
- (id)initWithCommandRecognitionSystem:(id)a0 spokenCommands:(id)a1;

@end
