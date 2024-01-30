@class NSString;

@interface TSUURLTrackerLogContext : NSObject <TSULogContext> {
    NSString *_publicString;
}

@property (readonly) NSString *publicString;
@property (readonly) NSString *privateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURLTracker:(id)a0;

@end
