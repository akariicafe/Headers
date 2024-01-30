@class NSString;

@interface VisualIntelligence.AnyVIAEvent : NSObject <VIAEvent> {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) NSString *originatingApplication;
@property (nonatomic, readonly) BOOL shouldWaitUntilEntryPointStarts;
@property (nonatomic, readonly) unsigned long long queryID;

- (id)feedback;
- (void).cxx_destruct;
- (id)init;

@end
