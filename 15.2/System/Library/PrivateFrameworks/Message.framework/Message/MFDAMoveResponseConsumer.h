@class NSSet, NSMutableDictionary, MFError, NSMutableSet;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {
    NSSet *_sourceRemoteIDs;
    NSMutableDictionary *_destinationRemoteIDsBySourceRemoteIDs;
    NSMutableSet *_failures;
}

@property (retain, nonatomic) MFError *error;
@property (readonly, nonatomic) long long statusCode;

- (void).cxx_destruct;
- (void)taskFailed:(id)a0 statusCode:(long long)a1 error:(id)a2;
- (void)resultsForMessageMove:(id)a0;
- (id)initWithSourceRemoteIDs:(id)a0 destinationRemoteIDsBySourceRemoteIDs:(id)a1 failures:(id)a2;

@end
