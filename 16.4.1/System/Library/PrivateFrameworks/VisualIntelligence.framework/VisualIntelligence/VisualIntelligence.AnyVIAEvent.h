@class NSString;

@interface VisualIntelligence.AnyVIAEvent : NSObject <VIAEvent> {
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) NSString *originatingApplication;
@property (nonatomic, readonly) unsigned long long queryID;

- (id)feedback;
- (id)init;
- (void).cxx_destruct;

@end
